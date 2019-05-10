package codekata

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestReadFromHardware(t *testing.T) {
	hardware := makeMockHardware()
	driver := DeviceDriver{hardware}

	data, err := driver.Read(0xFF)

	assert.EqualValues(t, 0, data)
	assert.NoError(t, err)
}

type mockHardware struct {
}

func makeMockHardware() *mockHardware {
	return &mockHardware{}
}

func (mock *mockHardware) Read(address uint32) byte {
	return 0
}

func (mock *mockHardware) Write(address uint32, data byte) {

}
