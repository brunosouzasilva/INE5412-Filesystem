#ifndef DISKBLOCK_H
#define	DISKBLOCK_H

/**
 * A block in the disk, consisting of a simple array of @type{unsigned char}.
 * A block disk resides in RAM and has to be flushed to a physical disk.
 * When created, the DiskBlock automatically allocates space in memory and releases it when destroyed @see DiskBlock(), @see ~DiskBlock()
 */
class DiskBlock {
public:
    /**
     * Creates a new block that resides on memory, allocating the specified number of bytes
     * @param blocksize Number of bytes to allocate to the DiskBlock
     */
    DiskBlock(const unsigned int blocksize);

    /**
     * Free the allocated bytes
     */
    virtual ~DiskBlock();

    /**
     * Read some bytes of the block
     * @param first Initial byte to be read
     * @param length Number of bytes to read
     * @param bytes Pointer to the structure where will be saved the read bytes
     */
    void readBytes(const unsigned short first, const unsigned short length, unsigned char* bytes);

    /**
     * Write some bytes in the block
     * @param first Start byte. The stored bytes will be filled upon this initial byte
     * @param length Number of bytes to write
     * @param bytes Pointer to the structure that contains the bytes to be writed in the block
     */
    void writeBytes(const unsigned short first, const unsigned short length, unsigned char* bytes);

private:
    unsigned char* rawData;
};

#endif	/* DISKBLOCK_H */
