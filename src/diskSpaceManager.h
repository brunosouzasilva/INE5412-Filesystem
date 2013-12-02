/* 
 * File:   diskSpaceManager.h
 * Author: cancian
 *
 * Created on 23 November 2013, 11:16
 */

#ifndef DISKSPACEMANAGER_H
#define	DISKSPACEMANAGER_H

/**
 * Abstract class to manage the disk space. Implementations include linked list, bit map, etc
 * @param disk The disk to manage its space
 */
class DiskSpaceManager {
public:
    DiskSpaceManager(Storage* disk);
public:
    unsigned long getTotalSpace();
    unsigned long getFreeSpace();
    DiskBlock::number allocBlock();
    void deallocBlock(DiskBlock::number block);
private:
    Storage* disk;
};

#endif	/* DISKSPACEMANAGER_H */

