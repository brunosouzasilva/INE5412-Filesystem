/*
 * fileAttributes.cpp
 *
 *  Created on: 03/12/2013
 *      Author: matheus
 */

#include "fileAttributes.h"

namespace std {

fileAttributes::fileAttributes() {
	// TODO Auto-generated constructor stub

}

fileAttributes::~fileAttributes() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */

FileAttributes::FileAttributes() {
}

char* FileAttributes::getFilename() {
	return this->filename;
}

void FileAttributes::setFilename(char* filename) {
	this->filename = filename;
}

FileAttributes::fileSize FileAttributes::getSize() {
	return this->size;
}

void FileAttributes::setSize(unsigned long size) {
	this->size = size;
}

FileAttributes::fileType FileAttributes::getType() {
	return this->type;
}

void FileAttributes::setType(fileType type) {
	this->type = type;
}
