/*
 * FlashMemoryDevice represents the interface to a Flash Memory Device.
 * The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that.
 * It is outlined in the top-level README file.
 */
typedef unsigned long Address;
typedef unsigned char Byte;

extern Byte device_read(const Address address);
extern void device_write(const Address address, const Byte data);
