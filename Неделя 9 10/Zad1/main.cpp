//1. � ���������� �������� �������� ����� ����� ����, ������� �������� ��������
//   � ������� � ���������� �� � �������.��������, ������ � ����, ���������� ������.

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


void Mean(float r, float l, float& AMean) {

	AMean = M_PI * r * (r + l);
}

int main() {

	float R, L, A;
	R = 5;
	L = 2;
	Mean(R, L, A);
	std::cout << "AMean=" << A << std::endl;

	return 0;
}