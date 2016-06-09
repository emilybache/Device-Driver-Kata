

#include "MockMemoryDevice.hpp"

#include <cstdlib>
#include <time.h>

MockMemoryDevice::MockMemoryDevice()
{}

char MockMemoryDevice::read(long address)
{
    return 0;
}

void MockMemoryDevice::write(long address, char data)
{
}
