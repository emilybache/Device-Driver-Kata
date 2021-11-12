class FlashMemoryDevice {

    read(address) {
        throw new Error("unsupported operation");
    }

    write(address, data) {
        throw new Error("unsupported operation");
    }
}

module.exports = {
    FlashMemoryDevice
};
