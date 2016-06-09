#include <gmock/gmock.h>
#include "FlashMemoryDevice.hpp"

class GMockMemoryDevice : public FlashMemoryDevice
{
public:

    MOCK_METHOD1(read, char(long address));
    MOCK_METHOD2(write, void(long address, char data));
};