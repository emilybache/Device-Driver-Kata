#include "DeviceDriver.hpp"

DeviceDriver::DeviceDriver(FlashMemoryDevice &hardware) : m_hardware(hardware)
{}

int DeviceDriver::read(long address)
{
    // TODO: implement this method properly
    return (int)address;
}
/*
void DeviceDriver::write(long address, int data)
{
    // TODO: implement this method

}
*/