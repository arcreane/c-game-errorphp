#pragma once
class room
{
#include <iostream>

public:
	room();
	~room();

	void set_enemy(enemy i) {
		enemi = i;			//remplacer par les vraies
	}

	void set_item(item i) {
		item = i;		   //remplacer par les vraies
	}


	enemy get_enemy(enemy i) {
		return enemy;		//remplacer par les vraies
	}

	item get_item(item i) {
		return item;   //remplacer par les vraies
	}

protected:
	enemy enemy; //remplacer par les vraies
	item item;  //remplacer par les vraies
};

