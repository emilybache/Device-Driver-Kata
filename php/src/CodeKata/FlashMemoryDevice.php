<?php


namespace CodeKata;

/**
 * This class represents the interface to a Flash Memory Device. The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that. It is outlined in the top-level README file.
 * @package CodeKata
 */
interface FlashMemoryDevice
{
    /**
     * @param int $address
     * @return int mixed
     */
    public function read($address);

    /**
     * @param int $address
     * @param int $data
     */
    public function write($address, $data);
}
