package codekata

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestReadFromHardware(t *testing.T) {
	// TODO: replace hardware with a Test Double
	hardware := MockHardware{}
	driver := DeviceDriver{hardware}

	data, err := driver.Read(0xFF)

	assert.EqualValues(t, 0, data)
	assert.NoError(t, err)
}

type MockHardware struct {
}

func (hardware MockHardware) Read(address uint32) (byte, error) {
	return 0, nil
}

func (hardware MockHardware) Write(address uint32, data byte) error {
	return nil
}
