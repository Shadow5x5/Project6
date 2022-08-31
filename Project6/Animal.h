#pragma once
#include <string>
#include <iostream>
#include "Predator.h"
class Animal : public Predator // Животное
{
private:
	std::string Title;
	float Weight;
	float Length;
	float Width;
	float Health;
	float Temp_health;
	int Age;
	bool Gender;
	
public:
	Animal() {
		Weight = Length = Width = Health = Age = Temp_health = 0.0;
	}
	std::string getTitle() {
		return Title;
	}
	void setTitle(std::string text) {
		this->Title = text;
	}
	void addAnimal() {
		float temp_num;
		std::string text;
		std::cout << "Название животного: ";
		std::cin >> Title;
		std::cout << "Возраст животного: ";
		std::cin >> temp_num;
		Age = int(temp_num);
		std::cout << "Длина животного: ";
		std::cin >> Length;
		std::cout << "Ширина животного: ";
		std::cin >> Width;
		std::cout << "Пол животного М или Ж: ";
		std::cin >> text;
		if (text == "М") {
			Gender = true;
		}
		else {
			Gender = false;
		}
		std::cout << "Жизнь животного: ";
		std::cin >> Health;
		Temp_health = Health;
	}
	float setTempHealth() {
		return Temp_health;
	}
	float setHealth() {
		return Health;
	}
};

