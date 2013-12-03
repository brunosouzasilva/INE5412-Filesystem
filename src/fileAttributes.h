/* 
 * File:   fileAttributes.h
 * Author: cancian
 *
 * Created on 23 November 2013, 11:27
 */

#ifndef FILEATTRIBUTES_H
#define	FILEATTRIBUTES_H

/**
 * Base class for file attributes. Includes only the name, size and type of a file.
 */

class FileAttributes {
public:

	typedef unsigned int fileSize;

    FileAttributes();
public:
    enum fileType {a,d,c,b,l};
    
    char* getFilename();
    void setFilename(char* filename);
    fileSize getSize();
    void setSize(unsigned long size);
    fileType getType();
    void setType(fileType type);
private:
    char* filename;
    unsigned long size;
    fileType type;
};

#endif	/* FILEATTRIBUTES_H */

