#include "bitmap.h"

char bitmap[];
int blockQty;
int blockSize;

Bitmap::BitMap(Disk* disk) {
    
    blockSize = disk->getBlockSize();
    blockQty = disk->getMaxBlocks();
    bitmap[blockQty];  
}


Bitmap::isBlockAllocated(const blockNumber blockNum) {
    return bitmap[blockNum] == '' ? false : true;
}

Bitmap::setBlockAllocated(const blockNumber blockNum, const bool allocated) {
    
    if(allocated == true) 
        bitmap[blockNum] == '@';
    else bitmap[blockNum] == '';
}

Bitmap::allocateBlock() {
    return allocBlock();
}
// 
blockNumber DiskSpaceManager::allocBlock() {
    
    for(int i=0; i<blockQty; i++) {
        if (bitmap[i] == '') {
            bitmap[i] == '@';
            return i;
        }                
    }
}

DiskSpaceManager::deallocBlock(blockNumber block) {
     bitmap[block] == '';
}

unsigned long DiskSpaceManager::getFreeSpace() {
   
    int freeBlockQty = 0;
    for(int i=0; i<blockQty; i++) {
        if (bitmap[i] == '') {
            freeBlockQty++;
        } 
    }
   
    return freeBlockQty * blockSize;
}

unsigned long DiskSpaceManager::getTotalSpace() { 
    return blockQty * blockSize;
}


