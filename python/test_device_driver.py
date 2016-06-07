import unittest

from hardware_interface import *

class DeviceDriverTest(unittest.TestCase):

    def test_successful_write(self):
        driver = DeviceDriver()
        self.assertEqual(0x0, driver.read(0xFF))


if __name__ == "__main__":
    unittest.main()