/*
 * fileSystemAPI.cpp
 *
 *  Created on: 03/12/2013
 *      Author: matheus
 */

#include "fileSystemAPI.h"
#include <cstdio>

namespace std {

fileSystemAPI::fileSystemAPI() {
	// TODO Auto-generated constructor stub

}

fileSystemAPI::~fileSystemAPI() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */

void FileSystemAPI::format() {
}

void FileSystemAPI::cp(const char* sourcepath, const char* destpath) {
}

void FileSystemAPI::mv(const char* sourcepath, const char* destpath) {
}

void FileSystemAPI::remove(const char* path) {
}

fileIdentifier FileSystemAPI::createfile(const char* path, const int mode) {
}

fileIdentifier FileSystemAPI::openfile(const char* path, const int mode) {

}

void FileSystemAPI::closefile(const fileIdentifier file) {
}

unsigned int FileSystemAPI::readfile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes) {
}

unsigned int FileSystemAPI::writefile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes) {
}

FileAttributes::fileType FileSystemAPI::getFileType(const char* path) {
}

fileSize FileSystemAPI::getFileZise(const char* path) {
}
