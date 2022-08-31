#pragma once
class Herbivores // Травоядный
{
private:
	float Damage;
public:
	Herbivores() {
		Damage = 0.1;
	}
	float Attack() {
		return Damage;
	}
};

