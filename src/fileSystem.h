/* 
 * File:   fileSystem.h
 * Author: cancian
 *
 * Created on 22 November 2013, 16:24
 */

#ifndef FILESYSTEM_H
#define	FILESYSTEM_H

#include "storage.h"
#include "diskSpaceManager.h"
#include "fileAllocationTable.h"
#include "fileAllocator.h"
#include "fileSystemAPI.h"


/**
 * The whole File System represented. It consists of a single abstract @class Disk which space is managed by an abstract @class DiskSpaceManager,
 * and where an abstract @class FileAllocationTable logs information about files allocated by an abstract @class FileAllocator. 
 * This File System then provides an abstract @class FileSystemAPI list of services provided.
 * @param disk The abstract disk where file are allocated in (implementations include @class SimulatedSiak).
 * @param diskSpaceManager The abstract algorithm to manage disk space (implementations include @class Bitmap).
 * @param fat The abstract structure to log file allocations (implementations include @class FileAllocationTable).
 * @param allocator The abstract algorithm to allocate files (implementations include @class IndexFileAllocator).
 * @param api The abstract list of services provided by this File System (implementations include @class MultiDirectoryAPI).
 */
class FileSystem {
public:
    FileSystem(Storage *disk, DiskSpaceManager diskSpaceManager, FileAllocationTable fat, FileAllocator allocator, FileSystemAPI api);
public:
    FileSystemAPI API;
private:
    Storage *disk;
    DiskSpaceManager diskSpaceManager;
    FileAllocationTable fat;
    FileAllocator allocator;
private:
};

#endif	/* FILESYSTEM_H */

