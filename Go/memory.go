package codekata

// FlashMemoryDevice represents the interface to a Flash Memory Device.
// The hardware has only two methods - 'read' and 'write'
// However, the interface for using the device is a lot more complex than that.
// It is outlined in the top-level README file.
type FlashMemoryDevice interface {
	Read(address uint32) byte
	Write(address uint32, data byte)
}
