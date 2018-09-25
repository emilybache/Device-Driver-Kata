
namespace device
{
    public interface IFlashMemoryDevice
    {
        byte Read(long address);
        void Write(long address, byte data);
    }
}
