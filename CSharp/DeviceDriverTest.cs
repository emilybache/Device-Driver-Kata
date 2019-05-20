using Xunit;

namespace device
{
    public class DeviceDriverTest
    {

        [Fact]
        public void Read_From_Hardware()
        {
            //TODO: replace the hardware with a test double
            IFlashMemoryDevice hardware = null;
            DeviceDriver driver = new DeviceDriver(hardware);
            byte data = driver.Read(0xFF);
            Assert.Equal(0b0, data);
        }

    }

}
