#include "fileSystemAPI.h"

FileSystemAPI::FileSystemAPI() {
	// TODO Auto-generated constructor stub
}

FileSystemAPI::~FileSystemAPI() {
	// TODO Auto-generated destructor stub
}

void FileSystemAPI::format() {
}

void FileSystemAPI::cp(const char* sourcepath, const char* destpath) {
}

void FileSystemAPI::mv(const char* sourcepath, const char* destpath) {
}

void FileSystemAPI::remove(const char* path) {
}

FileSystemAPI::fileIdentifier FileSystemAPI::createfile(const char* path, const int mode) {
}

FileSystemAPI::fileIdentifier FileSystemAPI::openfile(const char* path, const int mode) {

}

void FileSystemAPI::closefile(const fileIdentifier file) {
}

unsigned int FileSystemAPI::readfile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes) {
}

unsigned int FileSystemAPI::writefile(const fileIdentifier file, const unsigned char numBytes, char* bufferBytes) {
}

FileAttributes::fileType FileSystemAPI::getFileType(const char* path) {
}

FileAttributes::fileSize FileSystemAPI::getFileSize(const char* path) {
}
