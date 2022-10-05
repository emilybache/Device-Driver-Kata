#ifdef TEST

#include "unity.h"

#include "device_driver.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_device_driver(void)
{
    Byte data;

    data = driver_read(0xFF);

    TEST_ASSERT_EQUAL_INT(0, data);
}

#endif // TEST
