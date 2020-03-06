#include "DeviceDriver.h"
/*
 * DeviceDriver is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
 */

Byte driver_read(const Address address)
{
    /* TODO: implement this method */
    return 0x1;
}

DriverStatus driver_write(const Address address, const Byte data)
{
    /* TODO: implement this method */
    return Ok;
}
