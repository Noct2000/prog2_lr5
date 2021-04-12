// Макрос для використання С-функцій 
#define _CRT_SECURE_NO_WARNINGS
// Необхідні бібліотеки
#include <iostream>
#include <stdio.h>
#include <string.h>
// Оголошення структури відповідної кубам
struct Cube {
	int edge = 0;
	char color[256] = "NULL";
	char material[256] = "NULL";
};
// Функція для підрахунку кубів вдповідних умові 
int selectCube(Cube*, int, bool(Cube));
// Функція для заповнення массиву кубів
void setCubes(Cube*, int);
// Функція для отримання значень массиву кубів
void getCubes(Cube*, int);
// Функції, що відповідають небхідній умові
bool cond1(Cube);
bool cond2(Cube);
