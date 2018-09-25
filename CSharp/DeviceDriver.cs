
namespace device
{
    /// This class is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
    public class DeviceDriver
    {

        public DeviceDriver(IFlashMemoryDevice hardware)
        {
            // TODO: implement this method
        }

        public byte Read(long address)
        {
            // TODO: implement this method
            return 0b1;
        }

        public void Write(long address, byte data)
        {
            // TODO: implement this method
        }
    }
}
