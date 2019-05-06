class DeviceDriver:
    """
    This class is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
    """

    def __init__(self, device):
        """
        :type device: hardware_interface.FlashMemoryDevice
        """
        self.device = device

    def write(self, address, data):
        # TODO: implement this method
        pass

    def read(self, address):
        # TODO: implement this method
        pass
