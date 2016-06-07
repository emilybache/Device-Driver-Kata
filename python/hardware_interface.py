
class FlashMemoryDevice:
    """
    This class represents the interface to a Flash Memory Device. The hardware has only two methods - 'read' and 'write'
    However, the interface for using the device is a lot more complex than that. It is outlined in the top-level README file.
    """

    def read(self, address):
        """
        returns the data found at the address given.
        This method is implemented in the actual hardware, this is just a stub showing the interface that method fulfills.
        """
        pass

    def write(self, address, data):
        """
        write the data given to the address given.
        This method is implemented in the actual hardware, this is just a stub showing the interface that method fulfills.
        """
        pass