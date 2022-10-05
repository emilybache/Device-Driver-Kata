#ifndef DEVICE_DRIVER_H
#define DEVICE_DRIVER_H

#include "flash_memory_device.h"

/*
 * DeviceDriver is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
 */

typedef enum {
    Ok = 0
} DriverStatus;

extern Byte driver_read(Address address);
extern DriverStatus driver_write(Address address, Byte data);


#endif // DEVICE_DRIVER_H
