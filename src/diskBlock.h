/* 
 * File:   diskBlock.h
 * Author: cancian
 *
 * Created on 22 November 2013, 15:09
 */

#ifndef DISKBLOCK_H
#define	DISKBLOCK_H

/**
 * A block in the disk, consisting of a simple array of @type{unsigned char}. 
 * A block disk resides in RAM and has to be flushed to a physical disk.
 */
class DiskBlock {
public:
    DiskBlock();
public:
    void readBytes(const unsigned short first, const unsigned short length, unsigned char* bytes);
    void writeBytes(const unsigned short first, const unsigned short length, unsigned char* bytes);
private:
    unsigned char* rawData;    
};

#endif	/* DISKBLOCK_H */

