<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Rector\PHPUnit\CodeQuality\Rector\MethodCall\RemoveSetMethodsMethodCallRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->rule(RemoveSetMethodsMethodCallRector::class);
};
