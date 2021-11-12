import { FlashMemoryDevice } from "./flashmemorydevice";

/**
 * This class is used by the operating system to interact with the hardware.
 */
export class DeviceDriver {

    constructor(hardware: FlashMemoryDevice) {
        // TODO: implement this method
    }

    public read(address: number): number {
        // TODO: implement this method
        return -1;
    }

    public write(address: number, data: number): void {
        // TODO: implement this method
    }
}
