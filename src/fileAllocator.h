#ifndef FILEALLOCATION_H
#define FILEALLOCATION_H

/**
 * Abstract class the represents an algorithm for file allocation. Possible implementations include contiguous, linked, indexed, ...
 * @param disk The disk that allocator allocates files in.
 * @param fat The file allocation table to register allocations
 */
class FileAllocator {
public:

    typedef unsigned int fileIdentifier;

    explicit
    FileAllocator(Storage* disk, FileAllocationTable* fat) {
        this->disk = disk;
        this->fat = fat;
    }

    virtual ~FileAllocator() = 0;

public:
    virtual void createFile() = 0;
    virtual void removeFile(const unsigned char* path) = 0;

    virtual fileIdentifier openFile(const unsigned char* path) = 0;
    virtual void closeFile(const fileIdentifier file) = 0;

    virtual unsigned int readFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes) = 0;
    virtual unsigned int writeFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes) = 0;

    virtual void seek(const unsigned long numByte) = 0;

private:
    Storage* disk;
    FileAllocationTable* fat;
};

#endif  /* FILEALLOCATION_H */
