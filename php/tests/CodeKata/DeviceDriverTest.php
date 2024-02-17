<?php

namespace CodeKata\Tests;

use CodeKata\DeviceDriver;
use CodeKata\FlashMemoryDevice;
use PHPUnit\Framework\TestCase;

class DeviceDriverTest extends TestCase
{

    public function testReadFromHardware()
    {
        /** @var FlashMemoryDevice $hardware */
        $hardware = null;
        $driver = new DeviceDriver($hardware);
        $data = $driver->read(0xFF);
        $this->assertEquals(0, $data);
    }
}
