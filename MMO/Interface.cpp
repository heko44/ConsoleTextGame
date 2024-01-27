
//#include "GameScripts.hpp"
#include "Menu.hpp"
#include <iostream>
#include <limits>
#include <cmath>
//#include <Windows.h>
//#include <cstdlib>
//#include "GameScripts.hpp"
//
//void GameScripts::I_create_world() {
//
//	map->create_map();
//	map->transform();
//	map->spawn_mobs();
//}
//
//void GameScripts::I_display(Player &player){
//
//	Menu menu;
//	int action{};
//
//	while (action != 3){
//
//		//map->display_mobs();
//		map->display(player);
//
//		action = menu.display();
//
//		switch (action) {
//		case 1: I_move_character(player, *map); break;
//		case 2: I_open_inventory(player); break;
//		case 3: I_main_menu();	  break;
//
//		default: std::cout << "Wrong action" << std::endl;
//			break;
//		}
//
//		if (player.get_health_points() <= 0)
//			I_display(player);
//	}
//
//
//}
//
//void GameScripts::I_move_character(Player &player, Map &map) {
//
//	int x, y;
//
//	do {
//		std::cout << "\nEnter X cordinates: ";
//		std::cin >> x;
//		std::cout << "Enter Y cordinates: ";
//		std::cin >> y;
//
//		if (!std::cin.good()) {
//			std::cin.clear();std::cin.ignore();}
//
//
//		if (x < 1 || y < 1 || x > map.get_map_X_max() || y > map.get_map_Y_max()) {
//			std::cout << "\nEnter correct cordinates\n";
//		}
//
//	} while (x < 1 || y < 1 || x > map.get_map_X_max() || y > map.get_map_Y_max());
//	
//	int Xdistance = abs(player.get_x() - x);
//	int Ydistance = abs(player.get_y() - y);
//
//	while ((Xdistance != 0 || Ydistance != 0) && player.get_health_points() > 0) {
//		if (Xdistance >= Ydistance) {
//			if (x < player.get_x())
//				player.set_x(player.get_x() - 1);
//			else
//				player.set_x(player.get_x() + 1);
//
//			Xdistance--;
//		}
//
//		else {
//			if (y < player.get_y())
//				player.set_y(player.get_y() - 1);
//			else
//				player.set_y(player.get_y() + 1);
//
//			Ydistance--;
//		}
//
//		system("cls");
//		//map.display_mobs();
//		map.display(player);
//
//		if (map.mobs_cord(player.get_x(), player.get_y()) != nullptr) {
//
//			std::unique_ptr<Entity> mob = std::move(map.mobs_cord(player.get_x(), player.get_y()));
//			mob->spawn();
//
//			//gamescripts.fight(*mob);
//			Xdistance = 0;
//			Ydistance = 0;
//		}		
//		Sleep(1000);
//	}
//	system("cls");
//}
//
//void GameScripts::I_open_inventory(Player &player) {
//	system("cls");
//	player.open_inventory();
//	system("cls");
//}
//
//void GameScripts::I_main_menu() {
//
//}