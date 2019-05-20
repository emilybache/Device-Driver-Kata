package codekata

// DeviceDriver is used by the operating system to interact with the hardware 'FlashMemoryDevice'.
type DeviceDriver struct {
	device FlashMemoryDevice
}

func (driver DeviceDriver) Read(address uint32) (byte, error) {
	// TODO: implement this method
	return 0x1, nil
}

func (driver DeviceDriver) Write(address uint32, data byte) error {
	// TODO: implement this method
	return nil
}
