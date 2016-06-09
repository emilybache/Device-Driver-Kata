#include "DeviceDriver.hpp"
#include "MockMemoryDevice.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(DeviceDriver, read)
{
    MockMemoryDevice *hardware = new MockMemoryDevice();
    DeviceDriver *device = new DeviceDriver(*hardware);
    ASSERT_EQ(0, device->read(0xFF));
}
