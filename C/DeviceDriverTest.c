#include <setjmp.h> /* jmp_buf for mocka */
#include <stdarg.h> /* va_start for mocka */
#include <stdlib.h> /* size_t for mocka */
#include <cmocka.h>
#include "DeviceDriver.h"

static void test_read_from_hardware(void** state)
{
    Byte data;

    data = driver_read(0xFF);

    assert_int_equal(0, data);
}

/* mock hardware */
Byte device_read(const Address address)
{
    return 1;
}

void device_write(const Address address, const Byte data)
{
}

int main(void)
{
    const struct CMUnitTest test_suite[] = {
        cmocka_unit_test(test_read_from_hardware), /* */
    };

    return cmocka_run_group_tests(test_suite, NULL, NULL);
}
