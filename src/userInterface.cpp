/*
 * UserInterface.cpp
 *
 *  Created on: Dec 4, 2013
 *      Author: tonussi
 */

#include <cstdlib>
#include "INE5412Filesystem.h"
using namespace std;

UserInterface::UserInterface() {
	// TODO Auto-generated constructor stub
}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}

void UserInterface::PrintMenu () const {
	cout << "################## \n";
    cout << "# Main Menu:     # \n";
    cout << "################## \n";
    cout << "Create\n";
    cout << "List\n";
    cout << "Delete\n";
    cout << "Update\n";
    cout << "Print\n";
    cout << "Exit\n";

    /**
     * Menu padrão:
     * Provavelmente receberá alterações aqui
     * para interfacear com o usuário o File-
     * System de vocês.
     */
}
