#ifndef STORAGE_H
#define	STORAGE_H

#include "diskBlock.h"

/**
 * Abstract class that represents a disk and low level software I/O operations
 * @param blockSize, size in bytes of one disk block.
 * @param maxBlocks, maximum number of blocks in disk
 */
class Storage {
public:

	explicit
	Storage(const unsigned int blockSize, const unsigned int maxBlocks) {
		this->blockSize = blockSize;
		this->maxBlocks = maxBlocks;
	}

	virtual ~Storage() = 0;

	/**
	 * Save structures in ram into disk
	 */
	virtual void flush() = 0;

	/**
	 * @param n, The number of the block to be written
	 * @param block_buffer, A pointer to the disk block to be written.
	 */
	virtual void writeBlock(const DiskBlock::number n,
			DiskBlock* block_buffer) = 0;

	/**
	 * @param n, The number of the block to be read
	 * @return A pointer to the disk block read
	 */
	virtual DiskBlock* readBlock(const DiskBlock::number n) = 0;

	/**
	 * Returns the size of one disk block
	 */
	virtual unsigned int getBlockSize() = 0;

	/**
	 * Returns the maximum number of blocks in disk
	 */
	virtual unsigned int getMaxBlocks() = 0;

	virtual ~Storage() = 0;

protected:
	/* Attributes available to derived classes */
	unsigned int blockSize;
	unsigned int maxBlocks;
};

#endif	/* STORAGE_H */
