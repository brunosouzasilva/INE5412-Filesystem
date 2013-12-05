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

void UserInterface::run (INE5412Filesystem *fs) {
	PrintMenu();
	while (true) {
		this->status_escolhas = ValidaEscolhas();
		bool verifica = ExecutaPedidos(fs);
		if (verifica == false)
			break;
	}

	/**
	 * [] Needs revision
	 */
}

bool UserInterface::ExecutaPedidos (INE5412Filesystem *fs) {
    if (this->status_escolhas == EstadoPrintMenu) {
            PrintMenu();
            return true;
    }

    /**
     * Coming soon.
     */
}

short int UserInterface::ValidaEscolhas () {
	int escolha_atual;
	cout << "Escolha de 0~5";
	cin.clear();
	while (!cin || ((escolha_atual > 5) || (escolha_atual < 0)) ) {
	    cout << "InvalidInputException";
	}
    cin >> escolha_atual;
	return escolha_atual;
}
