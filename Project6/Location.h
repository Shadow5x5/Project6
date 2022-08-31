#pragma once
#include <Windows.h>
#include "Movement.h"
class Location // Локация
{
private:
	CONSOLE_CURSOR_INFO structCursorInfo;
	Movement movementInConsole;
	char** array;
	int N, M;
public:
	Location(int n, int m) {
		N = n;
		M = m;
		array = new char* [N];
		for (int i = 0; i < N; i++) {
			array[i] = new char[M];
		}
		GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &structCursorInfo);
		structCursorInfo.bVisible = false;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &structCursorInfo);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (i == 0 || j == 0 || j == M - 1 || i == N - 1) {
					array[i][j] = '0';
				}
				else {
					array[i][j] = ' ';
				}
			}
		}
		array[1][1] = '7';
		field_rendering();
	}

	void field_rendering() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				std::cout << array[i][j];
			}
			std::cout << std::endl;
		}
		movementInConsole.move();
	}

	~Location() {
		for (int i = 0; i < N; i++) {
			delete[] array[i];
		}
		delete[] array;
	}
};

