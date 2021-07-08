package codekata

import org.junit.Assert.assertEquals
import org.junit.Test

internal class DeviceDriverTest {

    @Test
    fun read_From_Hardware() {
        // TODO: replace hardware with a Test Double
        val hardware: FlashMemoryDevice = null!!
        val driver = DeviceDriver(hardware)
        val data = driver.read(0xFF)
        assertEquals(0, data.toLong())
    }

}
