#pragma once
#include <string>
#include "Animal.h"
class Food // ���
{
private:
	std::string Title;
	float Satiety ;
	float Rottenness;
	float Food_size;
	float Temp_food_size;
public:
	Food() {
		Rottenness = 5.0;
	}
	void Adding_food_for_herbivores() {
		int num;	
		std::cout << "�������� ���: ";
		std::cin >> Title;
		std::cout << "����������� ������� �� ������ ����: ";
		std::cin >> Satiety;
		std::cout << "������ ���: " << std::endl;
		std::cout << "1. �������" << std::endl;
		std::cout << "2. �������" << std::endl;
		std::cout << "3. ���������" << std::endl;
		std::cin >> num;
		switch (num)
		{
		case 1: Temp_food_size = Food_size = 3.0; break;
		case 2: Temp_food_size = Food_size = 6.0; break;
		case 3: Temp_food_size = Food_size = 9.0; break;
		default:
			break;
		}
	}
	void Adding_food_for_predators(float Health) {
		Temp_food_size = Food_size = Health;
		Satiety = 0.2;
	}
	int Check_for_spoilage() {
		if (Temp_food_size != Food_size) {

			if (Rottenness == 0)
			{
				return 0;
			}
			else {
				Rottenness -= 1.0;
				return 1;
			}
		}
	}
	int Food_intake() {
		if (Food_size == 0) {
			return 0;
		}
		else {
			Food_size -= 1.0;
		}
	}
};

