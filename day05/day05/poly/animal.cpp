#include "animal.h"

int main() {
	Animal animal = Animal();
	//animal.breathe();

	//Cat cat = Cat();
	//cat.cry();
	Animal* cat = new Cat();  //new - 메모리에서 생성
	cat->breathe();
	cat->cry();

	Animal* dog = new Dog();
	dog->breathe();
	dog->cry();

	delete cat;     //메모리에서 해제
	delete dog;
	
	return 0;
}