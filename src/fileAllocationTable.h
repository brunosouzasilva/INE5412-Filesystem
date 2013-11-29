/* 
 * File:   fileAllocationTable.h
 * Author: cancian
 *
 * Created on 23 November 2013, 11:25
 */

#ifndef FILEALLOCATIONTABLE_H
#define	FILEALLOCATIONTABLE_H

#include "disk.h"
#include "config.h"
#include "fileAllocationEntry.h"

class FileAllocationTable {
public:
    FileAllocationTable(Disk* disk);
public:
    void addFileEntry(FileAllocationEntry fatEntry);
    void removeFileEntryByNode(fileIdentifier inode);
    void removeFileEntryByRank(unsigned int rank);
    FileAllocationEntry getFileEntryByNode(fileIdentifier inode);
    FileAllocationEntry getFileEntryByRank(unsigned int rank);
    void setFileEntry(unsigned int rank, FileAllocationEntry fatEntry);
private:
    Disk* disk;
};

#endif	/* FILEALLOCATIONTABLE_H */

