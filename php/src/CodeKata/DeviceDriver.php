<?php

declare(strict_types=1);

namespace CodeKata;

/**
 * This class is used by the operating system to interact
 * with the hardware 'FlashMemoryDevice'. @see FlashMemoryDevice
 */
class DeviceDriver
{
    /**
     * @param FlashMemoryDevice $hardware
     */
    public function __construct($hardware)
    {
        // TODO: implement this method
    }

    /**
     * @param int $address
     * @return int
     */
    public function read(int $address): int
    {
        return -1;
    }

    /**
     * @param int $address
     * @param int $data
     * @return void
     */
    public function write(int $address, int $data): void
    {
        // TODO: implement this method
    }
}
