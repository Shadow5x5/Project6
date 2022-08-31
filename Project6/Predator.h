#pragma once
#include "Food.h"
class Predator // Хищник
{
private:
	Food food;
	float Damage;
public:
	Predator() {
		Damage = 1.0;
		/*food.Adding_food_for_predators(Health);*/
	}
	float Attack() {
		return Damage;
	}
};

