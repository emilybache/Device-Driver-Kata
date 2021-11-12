export class FlashMemoryDevice {

    public read(address: number): number {
        throw new Error("unsupported operation");
    }

    public write(address: number, data: number): void {
        throw new Error("unsupported operation");
    }
}
