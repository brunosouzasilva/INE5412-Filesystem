/* 
 * File:   disk.h
 * Author: cancian
 *
 * Created on 22 November 2013, 15:04
 */

#ifndef DISK_H
#define	DISK_H

#include "config.h"
#include "diskBlock.h"


/**
 * Abstract class that represents a disk and low(er) level software I/O operations
 * @param blocksize size in bytes of one disk block.
 * @param maxBlocks maximum number of blocks in the @class Disk
 */
class Disk {
public:
    Disk(const unsigned int blocksize, blockNumber maxBlocks);
public:
    /**
     * Save structures in ram into disk
     */
    void flush(DiskBlock diskBlocks[]);
    /**
     * Writes a block @param block into RAM structures
     * @param bn The number of the block to be written
     * @param block A pointer to the disk block.
     */
    void writeBlock(const blockNumber bn, const DiskBlock* block);
    
    /**
     * Reads a block @param block 
     * @param bn The number of the block to be read
     * @param block A pointer to the block
     */
    void readBlock(const blockNumber bn, DiskBlock* block);
    
    /**
     * Sets the size of all blocks in the @class Disk
     * @param blocksize The number of bytes per block
     */
    void setBlockSize(const unsigned int blocksize);
    
    /**
     * Returns the size of one disk block
     * @return The number of bytes per block
     */
    unsigned int getBlockSize();
    
    /**
     * Sets the maximum number of blocks per disk, used to define disk total space.
     * @param maxBlocks The maximum number of blocks per disk 
     */
    void setMaxBlocks(const blockNumber maxBlocks);
    
    /**
     * Returns the number of blocks per disk
     * @return The number of blocks per disk
     */  
    blockNumber getMaxBlocks();
    
    
private:
    unsigned int blocksize;
    blockNumber maxBlocks;
};

#endif	/* DISK_H */

