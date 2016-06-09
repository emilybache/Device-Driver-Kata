#include "DeviceDriver.hpp"
#include "GMockMemoryDevice.hpp"
#include "MockMemoryDevice.hpp"
#include <gtest/gtest.h>

// remove this line if you're not using gmock
#include <gmock/gmock.h>

using namespace ::testing;

TEST(DeviceDriver, read)
{
    MockMemoryDevice hardware;
    DeviceDriver device(hardware);
    ASSERT_EQ(0, device.read(0xFF));
}

// remove this test if you're not using gmock
TEST(DeviceDriver, read_using_gmock)
{
    GMockMemoryDevice hardware;
    EXPECT_CALL(hardware, read(_)).WillOnce(Return(0));
    DeviceDriver device(hardware);
    ASSERT_EQ(0, device.read(0xFF));
}
