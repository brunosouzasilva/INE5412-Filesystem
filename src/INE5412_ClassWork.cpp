#include "ine5412_ClassWork.h"

INE5412_ClassWork::INE5412_ClassWork() {
    createFileSystem();
}

void INE5412_ClassWork::useFileSystem() {
    fs.API.format();
    fileIdentifier fread = fs.API.createfile("/readme.txt", 0);
    fileIdentifier fboot = fs.API.createfile("/boot.dat", 0);
    char* bufferBytes = malloc(sizeof(char)*5);
    int numReaded = fs.API.readfile(fread, 4, bufferBytes);
    
}

void INE5412_ClassWork::createFileSystem() {
    // create File System components
    Disk* disk = new SimulatedDisk(1024, 2048); // a disk with 2048 blocks of 1024 bytes each = 2^11.2^10=2^21 bytes = 2MB
    DiskSpaceManager* bitmap = new Bitmap(disk);
    FileAllocationTable* fat = new FileAllocationTable(disk);
    FileAllocator* allocator = new IndexedFileAllocator(disk);
    FileSystemAPI* api = new FileSystemAPI();
    
    // create the FileSystem itself
    FileSystem* fs = new FileSystem(disk, bitmap, fat, allocator, api);
}
