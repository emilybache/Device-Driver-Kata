<?php


namespace CodeKata;


class DeviceDriverTest extends \PHPUnit_Framework_TestCase
{

    public function test_read_from_hardware() {
        /** @var FlashMemoryDevice $hardware */
        $hardware = null;
        $driver = new DeviceDriver($hardware);
        $data = $driver->read(0xFF);
        $this->assertEquals(0, $data);
    }
}
