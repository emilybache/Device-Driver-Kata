
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace device
{
    [TestClass]
    public class DeviceDriverTest
    {

        [TestMethod]
        public void Read_From_Hardware()
        {
            //TODO: replace the hardware with a test double
            IFlashMemoryDevice hardware = null;
            DeviceDriver driver = new DeviceDriver(hardware);
            byte data = driver.Read(0xFF);
            Assert.AreEqual(0b0, data);
        }

    }

}

