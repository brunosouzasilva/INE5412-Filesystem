/* 
 * File:   fileAllocation.h
 * Author: cancian
 *
 * Created on 23 November 2013, 11:25
 */

#ifndef FILEALLOCATION_H
#define	FILEALLOCATION_H

/**
 * Abstract class the represents an algorithm for file allocation. Possible implementations include contiguous, linked, indexed, ...
 * @param disk The disk that allocator allocates files in.
 * @param fat The file allocation table to register allocations
 */
class FileAllocator {
public:
    FileAllocator(Disk* disk, FileAllocationTable* fat);
public:
    void createFile();
    void removeFile(const unsigned char* path);
    
    fileIdentifier openFile(const unsigned char* path);
    void closeFile(const fileIdentifier file);
    
    unsigned int readFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes);
    unsigned int writeFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes);
    
    void seek(const unsigned long numByte);
private:
private:
    Disk* disk;
    FileAllocationTable* fat;
};

#endif	/* FILEALLOCATION_H */

