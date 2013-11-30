#include "diskBlock.h"
#include <stdlib.h>

DiskBlock::DiskBlock(const unsigned int blocksize) {
    rawData = (unsigned char *) malloc(blocksize);
}

DiskBlock::~DiskBlock() {
    free(rawData);
}

void DiskBlock::readBytes(const unsigned short first, const unsigned short length, unsigned char* bytes) {
    int i;
    for(i = 0; i < length; i++)
        *(bytes + i) = *(rawData + first + i);
}

void DiskBlock::writeBytes(const unsigned short first, const unsigned short length, unsigned char* bytes) {
    int i;
    for(i = 0; i < length; i++)
        *(rawData + first + i) = *(bytes + i);
}
