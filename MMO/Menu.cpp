#include "Menu.hpp"
#include <iostream>

int Menu::display() {
	int choice{};

	std::cout << "\nChoose action:\n";
	std::cout << "1. Move your character\n";
	std::cout << "2. Open inventory\n";
	std::cout << "3. Main menu\n\n"
		<< "Action: ";
	std::cin >> choice;

	return choice;
}