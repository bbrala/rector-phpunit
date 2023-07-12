<?php

namespace Rector\PHPUnit\Tests\Issues\DoubleAnnotation\Fixture;

use PHPUnit\Framework\TestCase;

final class SomeTest extends TestCase
{
    /**
     * @covers SomeClass::method
     * @dataProvider generatorInput
     */
    public function testSomething(mixed $expected)
    {
        $this->assertSame($expected, 'actual');
    }

    public function generatorInput()
    {
    }
}

-----
<?php

namespace Rector\PHPUnit\Tests\Issues\DoubleAnnotation\Fixture;

use PHPUnit\Framework\TestCase;

final class SomeTest extends TestCase
{
    #[\PHPUnit\Framework\Attributes\DataProvider('generatorInput')]
    #[\PHPUnit\Framework\Attributes\CoversClass(SomeClass::method)]
    public function testSomething(mixed $expected)
    {
        $this->assertSame($expected, 'actual');
    }

    public function generatorInput()
    {
    }
}
