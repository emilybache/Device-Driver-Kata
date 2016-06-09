#ifndef FLASH_INCLUDED
#define FLASH_INCLUDED

/*
 * This class represents the interface to a Flash Memory Device. The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that. It is outlined in the top-level README file.
 */

class FlashMemoryDevice
{
public:
    virtual char read(long address) = 0;
    virtual void write(long address, char data) = 0;
};

#endif
