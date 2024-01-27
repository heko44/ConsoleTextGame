#include <iostream>
//#include "Entity.hpp"
//#include "Player.hpp"
//#include "Weapon.hpp"
//#include "Armor.hpp"
//#include "Money.hpp"
//#include "Inventory.hpp"
//#include "ItemList.hpp"
//#include "Goblin.hpp"
//#include "Tools.hpp"
#include "GameScripts.hpp"

int main()
{
	int choice{ -1 };

	GameScripts game;
	game.run_game();

	//////////////////////////////////////////

	//Inventory i(1);
	//Tier1 t;
	/*Weapon w("Rusty sword", 10, 5, 1);
	Weapon w2("Blunt sword", 15, 10, 1);

	i.add_item(std::move(t.get_item(0)));

	i.print();*/

	
	//////////////////////////////////////////

	/*p.add_to_inventory(t.get_item(2));
	p.add_to_inventory(t.get_item(0));
	Goblin g;
	g.spawn();
	p.display_inventory();
	g.display_inventory();
	GameScripts game;
	game.fight(p, g);
	p.display_inventory();*/

	//////////////////////////////////////////////

	/*Weapon Uriziel("Uriziel", 100000, 100, 1);
	Armor A("Armor", 100, 20, 1);

	Money *money = new Money(1);
	Money *money2 = new Money(4);
	bool s{ money == money2 };

	std::cout << std::boolalpha <<s;


	p.add_to_inventory(*money2,2,true);*/

	/*Interface i;
	i.I_display();*/

	/*p.add_to_inventory(Uriziel);
	p.add_to_inventory(A);
	p.add_to_inventory(money);
	p.add_to_inventory(money2);

	Goblin g;
	g.spawn();
	g.drops();

	p.display_inventory();

	p.remove_from_invetory(1);
	p.remove_from_invetory(1);
	p.remove_from_invetory(1);
	p.remove_from_invetory(2);*/
	//p.remove_from_invetory(3);

	/*FileTextToSharedPtr s;
	s.SaveFromFile();*/



}