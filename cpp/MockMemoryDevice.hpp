
#include "FlashMemoryDevice.hpp"

class MockMemoryDevice : public FlashMemoryDevice
{
public:
    MockMemoryDevice();
    char read(long address);
    void write(long address, char data);
};