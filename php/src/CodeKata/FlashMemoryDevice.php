<?php

declare(strict_types=1);

namespace CodeKata;

/**
 * This class represents the interface to a Flash Memory Device. The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that. It is outlined in the top-level README file.
 */
interface FlashMemoryDevice
{
    /**
     * @param int $address
     * @return int
     */
    public function read(int $address): int;

    /**
     * @param int $address
     * @param int $data
     * @return void
     */
    public function write(int $address, int $data): void;
}
