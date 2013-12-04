#include "indexedFileAllocator.h"

IndexedFileAllocator::IndexedFileAllocator(Storage* disk, FileAllocationTable* fat) : FileAllocator(disk, fat) {

}

IndexedFileAllocator::~IndexedFileAllocator() {

}

void createFile() {

}

void removeFile(const unsigned char* path) {

}

FileAllocator::fileIdentifier openFile(const unsigned char* path) {

}

void closeFile(const FileAllocator::fileIdentifier file) {

}

unsigned int readFile(const FileAllocator::fileIdentifier file, const unsigned int numBytes, char* bufferBytes) {

}

unsigned int writeFile(const FileAllocator::fileIdentifier file, const unsigned int numBytes, char* bufferBytes) {

}

void seek(const unsigned long numByte) {

}
