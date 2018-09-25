package codekata;

import static org.junit.Assert.*;

import org.junit.Test;


public class DeviceDriverTest {

    @Test
    public void read_From_Hardware() {
        // TODO: replace hardware with a Test Double
        FlashMemoryDevice hardware = null;
        DeviceDriver driver = new DeviceDriver(hardware);
        byte data = driver.read(0xFF);
        assertEquals(0, data);
    }
}
