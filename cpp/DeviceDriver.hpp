
#include "FlashMemoryDevice.hpp"

class DeviceDriver
{
public:
    DeviceDriver(FlashMemoryDevice &hardware);
    int read(long address);
    void write(long address, int data);

protected:
    FlashMemoryDevice &m_hardware;
};
