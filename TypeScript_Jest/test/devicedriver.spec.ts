import { DeviceDriver } from "../src/devicedriver";
import { FlashMemoryDevice } from "../src/flashmemorydevice";

describe("Device Driver", () => {

  it("should read from hardware", () => {
    // TODO: replace hardware with a Test Double
    const hardware = new FlashMemoryDevice();
    const driver = new DeviceDriver(hardware);
    const data = driver.read(0xFF);
    expect(data).toEqual(0);
  });

});
