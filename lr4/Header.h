// ������ ��� ������������ �-������� 
#define _CRT_SECURE_NO_WARNINGS
// �������� ��������
#include <iostream>
#include <stdio.h>
#include <string.h>
// ���������� ��������� �������� �����
struct Cube {
	int edge = 0;
	char color[256] = "NULL";
	char material[256] = "NULL";
};
// ������� ��� ��������� ���� ��������� ���� 
int selectCube(Cube*, int, bool(Cube));
// ������� ��� ���������� ������� ����
void setCubes(Cube*, int);
// ������� ��� ��������� ������� ������� ����
void getCubes(Cube*, int);
// �������, �� ���������� �������� ����
bool cond1(Cube);
bool cond2(Cube);
