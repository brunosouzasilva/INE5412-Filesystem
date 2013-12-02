#include "diskBlock.h"

//FIXME
// endereco de base onde comecam os dados
// nao sei se eh realmente eh necessario, mas por enquanto deixo assim
int baseAddress;

SimulatedDisk::SimulatedDisk(const unsigned int blocksize, blockNumber maxBlocks) : Disk(blocksize, maxBlocks)
{
   
    diskBlocks[maxBlocks];
    Disk(blocksize, maxBlocks);
}

void Disk::Disk(const unsigned int blocksize, blockNumber maxBlocks) {
    setBlockSize(blocksize);
    setMaxBlocks(maxBlocks);
}
//FIXME
// flush deve receber o parametro diskBlocks
void Disk::flush(DiskBlock diskBlocks[]) {
    
    for(int blockIdx=0; blockIdx < maxBlocks; blockIdx++) {
        diskBlocks[blockIdx].writeBytes((unsigned short) (baseAddress + (blockNumber * blocksize)), (unsigned short) blocksize, 0);
    }
}

//FIXME
// nao vejo necessidade de ultimo parametro, sendo que cada diskBlock possui 
// um private member : rawData
// por enquanto passo 0
void Disk::readBlock(const blockNumber bn, DiskBlock* block) {
    block->readBytes((unsigned short) (baseAddress + (blockNumber * blocksize)), (unsigned short) blocksize, 0);
}

//FIXME
void Disk::writeBlock(const blockNumber bn, DiskBlock* block) {
	block->readBytes((unsigned short) (baseAddress + (blockNumber * blocksize)), (unsigned short) blocksize, 0);
}

void Disk::setBlockSize(const unsigned int blocksize) {
    this->blocksize = blocksize;
}

void Disk::setMaxBlocks(const blockNumber maxBlocks) {
    this->maxBlocks = maxBlocks;
}

unsigned int Disk::getBlockSize() {
    return blocksize;
}

unsigned int Disk::getMaxBlocks() {
    return maxBlocks;
}
