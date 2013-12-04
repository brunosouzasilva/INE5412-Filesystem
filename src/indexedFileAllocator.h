#ifndef INDEXEDFILEALLOCATOR_H
#define INDEXEDFILEALLOCATOR_H

#include "fileAllocator.h"

/**
 * The Indexed File Allocation algorithm implementation for @class FileAllocator abstract class.
 */
class IndexedFileAllocator : public FileAllocator {
public:
  IndexedFileAllocator(Storage* disk, FileAllocationTable* fat);
public:
  void createFile() override;
  void removeFile(const unsigned char* path) override;

  fileIdentifier openFile(const unsigned char* path) override;
  void closeFile(const fileIdentifier file) override;

  unsigned int readFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes) override;
  unsigned int writeFile(const fileIdentifier file, const unsigned int numBytes, char* bufferBytes) override;

  void seek(const unsigned long numByte) override;
};

#endif  /* INDEXEDFILEALLOCATOR_H */
