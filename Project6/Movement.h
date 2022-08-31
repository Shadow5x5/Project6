#pragma once
#include <iostream>
#include <conio.h>
#include "Animal.h"
#include "Food.h"
// 75 Влево
// 72 Вверх
// 77 Вправо
// 80 Вниз

class Movement // Перемещение
{
private:
	Animal animal;
	Food food;
	HANDLE hCon;
	COORD cPos;
	char sym, temp_sym, sym1, sym2, sym3, sym4, sym5;
	int X, Y,N,M;
	int num;
public:
	Movement() {
		sym = sym1 = sym2 = sym2 = sym3 = sym4 = sym5 = ' ';
		X = Y = 1;
	}
	Movement(int n, int m) {
		X = Y = 1;
		num = 0;
		N = n;
		M = m;
	}

	void Start() {
		while (true) {
			std::cout << "1. Добавить животное" << std::endl;
			std::cout << "2. Добавить растение для травоядных" << std::endl;
			std::cout << "3. Управлять животным" << std::endl;
			std::cout << "4. Запустить консоль" << std::endl;
			std::cin >> num;
			
			switch (num)
			{
			case 1: animal.addAnimal(); break;
			case 2: break;
			case 3: break;
			case 4: move(); break;
			default:
				break;
			}
		}


		
	}

	void move() {
		while (true) {
			sym = _getch();
			temp_sym = '7';
			switch (sym)
			{
			case 75: left(temp_sym);
				break;
			case 72: up(temp_sym);
				break;
			case 77: right(temp_sym);
				break;
			case 80: down(temp_sym);
				break;
			default:
				break;
			}
		}
	}
	void up(char c) {
		if (Y - 1 == 0) {
			return;
		}
		else {
			cPos.X = X;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << ' ';
			Y -= 1;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << c;
		}
	}
	void down(char c) {
		if (Y + 1 == N - 1) {
			return;
		}
		else {
			cPos.X = X;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << ' ';
			Y += 1;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << c;
		}
		
	}
	void right(char c) {
		if (X + 1 == M - 1) {
			return;
		}
		else {
			cPos.X = X;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << ' ';
			X += 1;
			cPos.X = X;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << c;
		}
	}
	void left(char c) {
		if (X - 1 == 0) {
			return;
		}
		else {
			cPos.X = X;
			cPos.Y = Y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << ' ';
			X -= 1;
			cPos.X = X;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
			std::cout << c;
		}
	}
};

