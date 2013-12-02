#ifndef INE5412Filesystem_H
#define	INE5412Filesystem_H

#include "fileSystem.h"


/**
 * The main class of this homework. It just creates the file system and then uses it. 
 * Thats where main code for tests should be placed in. 
 * One should format the disk, create some directories, navigate on them, create, write and close some files, reading existing
 * files and trying to read non existing ones, deleting files and stuff like that. Be creative.
 */
class INE5412Filesystem {
public:

	typedef unsigned int fileIdentifier;

    INE5412Filesystem();
public:
    void useFileSystem();
private:
    void createFileSystem();
private:
    FileSystem fs;
};

#endif	/* INE5412Filesystem_H */
