#ifndef SIMULATEDDISK_H
#define	SIMULATEDDISK_H

#include "storage.h"
#include "diskBlock.h"

/**
 * Implementation of abstract class @class Storage that represents a
 * simulated disk.
 *
 * This implementation simulates a disk by using a simple file in the
 * real HD of this machine.
 *
 * @param filename Name of the file to be used to simulate the disk.
 */
class SimulatedDisk: public Storage {
public:

    SimulatedDisk(const char* fileName, const unsigned int blockSize, DiskBlock::number maxBlocks);

    virtual void flush() override;
    virtual void writeBlock(DiskBlock::number n, DiskBlock * block_buffer) override;
    virtual DiskBlock * readBlock(DiskBlock::number n) override;
    virtual unsigned int getBlockSize() override;
    virtual unsigned int getMaxBlocks() override;

private:

    /** Name of the file used to simulate the disk. */
    char *fileName;
};

#endif	/* SIMULATEDDISK_H */
