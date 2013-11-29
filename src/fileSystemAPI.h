/* 
 * File:   fileSystemAPI.h
 * Author: cancian
 *
 * Created on 23 November 2013, 12:22
 */

#ifndef FILESYSTEMAPI_H
#define	FILESYSTEMAPI_H

#include "fileAttributes.h"


/**
 * The abstract API with minimum file support.
 */
class FileSystemAPI {
public:
    FileSystemAPI();
public:
    // general
    void format();
    // files
    void cp(const char* sourcepath, const char* destpath);
    void mv(const char* sourcepath,const char* destpath);
    void remove(const char* path);
    // file
    fileIdentifier createfile(const char* path, const int mode);
    fileIdentifier openfile(const char* path, const int mode);
    void closefile(const fileIdentifier file);
    unsigned int readfile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes);
    unsigned int writefile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes);
    // attributes
    FileAttributes::fileType getFileType(const char* path);
    fileSize getFileZise(const char* path);
};

#endif	/* FILESYSTEMAPI_H */

