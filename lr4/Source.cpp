#include "Header.h"
int selectCube(Cube* cubes, int size, bool condition(Cube)) {
	int number = 0;
	for (int i = 0; i < size; i++)
		if (condition(cubes[i]))
			number++;
	return number;

}

void setCubes(Cube* cubes, int size) {

	for (int i = 0; i < size; i++) {
		do {
			try {
				char buff[256];
				std::cout << "Type edge of cube (int decimal number) #" 
					<< i+1
					<< std::endl;
				std::cin >> buff;
				cubes[i].edge = atoi(buff);
				if (cubes[i].edge == 0)
					throw -1;
				if (cubes[i].edge < 0)
					throw -2;
				std::cout << "Type color of cube (word is less then 256 chars) #"
					<< i + 1 << std::endl;
				std::cin >> cubes[i].color;
				std::cout << "Type material of cube (word is less then 256 chars) #"
					<< i + 1 << std::endl;
				std::cin >> cubes[i].material;
				break;
			}
			catch (int e) {
				std::cin.ignore(256, '\n');
				std::cin.clear();
				std::cout <<"Error input; Code "
					<< e
					<< std::endl 
					<<"Invalid edge"<< std::endl;
				if (e == -2)
					std::cout << "Negative edge"
					<< std::endl;
				continue;
			}
		} while (true);
	}

}
void getCubes(Cube* cubes, int size) {

	for (int i = 0; i < size; i++) {
		std::cout << "The edge of cube " 
			<< i + 1
			<< " is "
			<< cubes[i].edge
			<< std::endl;
		std::cout << "The color of cube " 
			<< i + 1 
			<< " is "
			<< cubes[i].color
			<< std::endl;
		std::cout << "The material of cube " 
			<< i + 1 
			<< " is "
			<< cubes[i].material
			<< std::endl;
	}
}
bool cond1(Cube c) {
	return (!strcmp(_strlwr(c.material), "wood"))
		&& (c.edge == 3) ? true : false;
}
bool cond2(Cube c) {
	return (!strcmp(_strlwr(c.material), "metal"))
		&& (c.edge > 5) ? true : false;
}