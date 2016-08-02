<?php


namespace CodeKata;

/**
 * This class is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
 * @package CodeKata
 */
class DeviceDriver
{
    /**
     * @param FlashMemoryDevice $hardware
     */
    public function __construct($hardware) {
    // TODO: implement this method
    }

    /**
     * @param int $address
     * @return int
     */
    public function read($address) {
        return -1;
    }

    /**
     * @param int $address
     * @param int $data
     */
    public function write($address, $data) {
    // TODO: implement this method
    }

}