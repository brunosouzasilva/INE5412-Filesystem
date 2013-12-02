/* 
 * File:   main.cpp
 * Author: cancian
 *
 * Created on 22 November 2013, 14:58
 */

#include <cstdlib>
#include "INE5412Filesystem.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    INE5412Filesystem os1 = new INE5412Filesystem();
    os1.useFileSystem();
    
    return 0;
}

