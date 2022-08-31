#pragma once
#include <string>
#include <iostream>
#include "Predator.h"
class Animal : public Predator // ��������
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
		std::cout << "�������� ���������: ";
		std::cin >> Title;
		std::cout << "������� ���������: ";
		std::cin >> temp_num;
		Age = int(temp_num);
		std::cout << "����� ���������: ";
		std::cin >> Length;
		std::cout << "������ ���������: ";
		std::cin >> Width;
		std::cout << "��� ��������� � ��� �: ";
		std::cin >> text;
		if (text == "�") {
			Gender = true;
		}
		else {
			Gender = false;
		}
		std::cout << "����� ���������: ";
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

