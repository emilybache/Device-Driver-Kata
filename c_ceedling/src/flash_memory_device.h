#ifndef FLASH_MEMORY_DEVICE_H
#define FLASH_MEMORY_DEVICE_H

/*
 * FlashMemoryDevice represents the interface to a Flash Memory Device.
 * The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that.
 * It is outlined in the top-level README file.
 */
typedef unsigned long Address;
typedef unsigned char Byte;

extern Byte device_read(Address address);
extern void device_write(Address address, Byte data);

#endif // FLASH_MEMORY_DEVICE_H
