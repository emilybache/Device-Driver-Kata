#include "DeviceDriver.hpp"
#include "MockMemoryDevice.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(DeviceDriver, read)
{
    MockMemoryDevice hardware;
    DeviceDriver device(hardware);
    ASSERT_EQ(0, device.read(0xFF));
}
