package codekata

/**
 * This class represents the interface to a Flash Memory Device. The hardware has only two methods - 'read' and 'write'
 * However, the interface for using the device is a lot more complex than that. It is outlined in the top-level README file.
 */
interface FlashMemoryDevice {

    fun read(address: Long): Byte

    fun write(address: Long, data: Byte)

}
