/* 
 * File:   simulatedDisk.h
 * Author: cancian
 *
 * Created on 22 November 2013, 15:00
 */

#ifndef SIMULATEDDISK_H
#define	SIMULATEDDISK_H

#include <config.h>

/**
 * Implementation of abstract class @class Disk that represents a simulated disk. 
 * This implementation simulates a disk by using a simple file in the real HD of this machine.
 */
class SimulatedDisk: public Disk {
public:
    SimulatedDisk(const unsigned int blocksize, blockNumber maxBlocks);
    
private:           
    DiskBlock diskBlocks[];
};

#endif	/* SIMULATEDDISK_H */

