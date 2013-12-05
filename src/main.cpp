/*
 * File:   main.cpp
 * Author: cancian
 *
 * Created on 22 November 2013, 14:58
 */

#include <cstdlib>
#include "INE5412Filesystem.h"
#include "UserInterface.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    UserInterface UI;
	INE5412Filesystem *fileSys = new INE5412Filesystem();
    // os1.useFileSystem();
    UI.run(fileSys);

    return 0;
}
