<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Rector\PHPUnit\PHPUnit90\Rector\MethodCall\SpecificAssertContainsWithoutIdentityRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../../../../../../config/config.php');

    $rectorConfig->rule(SpecificAssertContainsWithoutIdentityRector::class);
};