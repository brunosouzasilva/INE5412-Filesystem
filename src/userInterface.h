/*
 * UserInterface.h
 *
 *  Created on: Dec 4, 2013
 *      Author: tonussi
 */

#include <cstdlib>
#include "INE5412Filesystem.h"
#include "UserInterface.h"
using namespace std;

class UserInterface {

private:

	short int status_escolhas;

	short int GetChoice();

	bool ExecChoice (INE5412Filesystem *fs);

	void PrintMenu () const;

public:
        UserInterface () {

        }
        ~UserInterface () {

        }

        void run (INE5412Filesystem *fs);

};
