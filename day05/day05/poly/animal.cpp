#include "animal.h"

int main() {
	Animal animal = Animal();
	//animal.breathe();

	//Cat cat = Cat();
	//cat.cry();
	Animal* cat = new Cat();  //new - �޸𸮿��� ����
	cat->breathe();
	cat->cry();

	Animal* dog = new Dog();
	dog->breathe();
	dog->cry();

	delete cat;     //�޸𸮿��� ����
	delete dog;
	
	return 0;
}