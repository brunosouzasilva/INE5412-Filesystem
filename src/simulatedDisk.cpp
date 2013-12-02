#include "simulatedDisk.h"

//FIXME
// endereco de base onde comecam os dados
// nao sei se eh realmente eh necessario, mas por enquanto deixo assim
int baseAddress;

SimulatedDisk::SimulatedDisk(const char *file_name,
							 const unsigned int blocksize,
							 DiskBlock::number maxBlocks)
	: Storage(blocksize, maxBlocks),
	  fileName(file_name);

void SimulatedDisk::flush() {

    for(int blockIdx=0; blockIdx < maxBlocks; blockIdx++) {
        diskBlocks[blockIdx].writeBytes((unsigned short) (baseAddress + (blockNumber * blocksize)), (unsigned short) blocksize, 0);
    }
}

// FIXME
@SuppressWarning("all") // No return statement
DiskBlock* SimulatedDisk::readBlock(const DiskBlock::number n) {
	// TODO: Procurar pelo bloco de número n e retorná-lo!
}

// FIXME
void SimulatedDisk::writeBlock(const DiskBlock::number n, DiskBlock* block_buffer) {
	// TODO: Escrever o conteúdo de block_buffer no bloco de número n
}

unsigned int Storage::getBlockSize() {
    return blockSize;
}

unsigned int Storage::getMaxBlocks() {
    return maxBlocks;
}
