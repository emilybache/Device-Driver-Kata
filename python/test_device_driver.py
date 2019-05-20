import unittest

from device_driver import DeviceDriver


class DeviceDriverTest(unittest.TestCase):
    def test_successful_read(self):
        hardware = MockHardware()
        driver = DeviceDriver(hardware)
        self.assertEqual(0x0, driver.read(0xFF))


class MockHardware:

    def read(self, address):
        return 0x0

    def write(self, address, data):
        pass


if __name__ == "__main__":
    unittest.main()
