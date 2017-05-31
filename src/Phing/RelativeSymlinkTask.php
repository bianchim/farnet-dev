<?php

namespace NextEuropa\Phing;

require_once 'phing/Task.php';

use FileSystem;
use PhingFile;
use Project;

/**
 * Generates relative symlinks based on a target / link combination.
 */
class RelativeSymlinkTask extends \SymlinkTask {

  /**
   * Convert an absolute end path to a relative path.
   *
   * @param string $endPath
   *   Absolute path of target.
   * @param string $startPath
   *   Absolute path where traversal begins.
   *
   * @return string
   *   Path of target relative to starting path.
   */
  public function makePathRelative($endPath, $startPath) {
    // Normalize separators on Windows.
    if ('\\' === DIRECTORY_SEPARATOR) {
      $endPath = str_replace('\\', '/', $endPath);
      $startPath = str_replace('\\', '/', $startPath);
    }

    // Split the paths into arrays.
    $startPathArr = explode('/', trim($startPath, '/'));
    $endPathArr = explode('/', trim($endPath, '/'));

    // Find for which directory the common path stops.
    $index = 0;
    while (isset($startPathArr[$index]) && isset($endPathArr[$index]) && $startPathArr[$index] === $endPathArr[$index]) {
      ++$index;
    }

    // Determine how deep the start path is relative to the
    // common path (ie, "web/bundles" = 2 levels).
    $depth = count($startPathArr) - $index;

    // Repeated "../" for each level need to reach the common path.
    $traverser = str_repeat('../', $depth);

    $endPathRemainder = implode('/', array_slice($endPathArr, $index));

    // Construct $endPath from traversing to the common path, then to the
    // remaining $endPath.
    $relativePath = $traverser . ('' !== $endPathRemainder ? $endPathRemainder . '/' : '');

    return '' === $relativePath ? './' : $relativePath;
  }

  /**
   * Create the symlink.
   *
   * @inheritDoc
   */
  protected function symlink($target, $link) {
    $fs = FileSystem::getFileSystem();

    // Convert target to relative path.
    $link = (new PhingFile($link))->getAbsolutePath();
    // @codingStandardsIgnoreLine: MULTISITE-17111
    $target = rtrim($this->makePathRelative($target, dirname($link)), '/');

    if (is_link($link) && @readlink($link) == $target) {
      $this->log('Link exists: ' . $link, Project::MSG_INFO);

      return TRUE;
    }

    if (file_exists($link) || is_link($link)) {
      if (!$this->getOverwrite()) {
        $this->log('Not overwriting existing link ' . $link, Project::MSG_ERR);

        return FALSE;
      }

      if (is_link($link) || is_file($link)) {
        $fs->unlink($link);
        $this->log('Link removed: ' . $link, Project::MSG_INFO);
      }
      else {
        $fs->rmdir($link, TRUE);
        $this->log('Directory removed: ' . $link, Project::MSG_INFO);
      }
    }

    $this->log('Linking: ' . $target . ' to ' . $link, Project::MSG_INFO);

    return $fs->symlink($target, $link);
  }

}
