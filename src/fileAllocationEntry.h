/* 
 * File:   fileAllocationEntry.h
 * Author: cancian
 *
 * Created on 23 November 2013, 13:03
 */

#ifndef FILEALLOCATIONENTRY_H
#define	FILEALLOCATIONENTRY_H

#include "fileAttributes.h"
#include "config.h"


/**
 * An entry in a FAT (@class {FileAllocationTable} ), representing a file (regular, directory or device) in the disk.
 * @param inode Unique id for the file
 * @param block The first block where the file is allocated using a @class FileAllocator algorithm.
 * @param attributes File attributes.
 */
class FileAllocationEntry {
public:
    FileAllocationEntry(fileIdentifier inode, blockNumber block, FileAttributes attributes);
public:
    fileIdentifier getNode();
    blockNumber getBlock();
    FileAttributes getAttributes();
    void setName(fileIdentifier inode);
    void setBlock(blockNumber block);
    void setAttributes(FileAttributes attributes);    
private:
    fileIdentifier inode;
    blockNumber block;
    FileAttributes attributes;
};

#endif	/* FILEALLOCATIONENTRY_H */

