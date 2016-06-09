#include "DeviceDriver.hpp"
#include "GMockMemoryDevice.hpp"
#include "MockMemoryDevice.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// You have the choice of using GMock or hand coding your mock. Delete one of these two tests depending on your choice.

TEST(DeviceDriver, read)
{
    GMockMemoryDevice hardware;
    EXPECT_CALL(hardware, read(_)).WillOnce(Return(0));
    DeviceDriver device(hardware);
    ASSERT_EQ(0, device.read(0xFF));
}

TEST(DeviceDriver, read1)
{
    MockMemoryDevice hardware;
    DeviceDriver device(hardware);
    ASSERT_EQ(0, device.read(0xFF));
}
