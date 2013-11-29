/* 
 * File:   bitmap.h
 * Author: cancian
 *
 * Created on 23 November 2013, 11:20
 */

#ifndef BITMAP_H
#define	BITMAP_H

/**
 * Abstract class to manage disk space. Set blocks as free or occupied. Implements @class DiskSpaceManager operations
 * @param disk The disk to manage the space
 * @return 
 */
class Bitmap: public DiskSpaceManager {
public:
    BitMap(Disk* disk);
public:
    /**
     * return true if block @param blockNum is actually occupied (allocated)
     */
    bool isBlockAllocated(const blockNumber blockNum);
    /**
     * set the block @param blockNum to occupied (allocated) if @param allocated is true, or set it to free otherwise 
     */
    void setBlockAllocated(const blockNumber blockNum, const bool allocated);

    /**
     * allocate one block using some criteria, and returns the number of the allocated block. Returns an invalid number if no free block exists
     * @return 
     */
    blockNumber allocateBlock();
private:
    Disk* disk;
};

#endif	/* BITMAP_H */

