/* 
 * File:   multiDirectoryAPI.h
 * Author: cancian
 *
 * Created on 25 November 2013, 23:29
 */

#ifndef MULTIDIRECTORYAPI_H
#define	MULTIDIRECTORYAPI_H

#include "fileSystemAPI.h"


/**
 * Implementation of a common multi directory based on a tree (graph) structure.
 * @param path
 */
class MultiDirectoryAPI: public FileSystemAPI {
public:
    // dirs
    void mkdir(const char* path);
    void rmdir(const char* path);
    void cd (const char* path);
};

#endif	/* MULTIDIRECTORYAPI_H */

