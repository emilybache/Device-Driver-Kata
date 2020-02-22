#include "FlashMemoryDevice.h"

/*
 * DeviceDriver is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
 */

typedef enum {
    Ok = 0
} DriverStatus;

extern Byte driver_read(const Address address);
extern DriverStatus driver_write(const Address address, const Byte data);
