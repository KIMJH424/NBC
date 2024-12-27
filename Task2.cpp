#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Animal {
public:
	virtual void makesound() = 0;
	virtual void move() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal {
public:
	void makesound() override {
		cout << "Woof Woof!" << endl;
	}
	void move() override {
		cout << "The Dog is wagging its tail." << endl;
	}
};

class Cat : public Animal {
public:
	void makesound() override {
		cout << "meowwww" << endl;
	}
	void move() override {
		cout << "The cat is meowing" << endl;
	}
};

class Cow : public Animal {
public:
	void makesound() override {
		cout << "Mooooooo~" << endl;
	}
	void move() override {
		cout << "The cow is chewing cud" << endl;
	}
};

Animal* createRandomAnimal(){
	int randomValue = rand() % 3;

	if (randomValue == 0){
		return new Dog();
    }
	else if (randomValue == 1) {
		return new Cat();
	}
	else {
		return new Cow();
	}
}
class Zoo {
private :
	Animal* animals[10];
	int animalCount;
public :
	Zoo() : animalCount(0){}
	void addAnimal(Animal* animal) {
		if (animalCount < 10) {
			animals[animalCount++] = animal;
		else{	
			cout << "Zoo is full!" << endl;
		}
		}
	}

	void performActions() {
		for (int i = 0;i < animalCount;++i) {
			animals[i]->makesound();
			animals[i]->move();
		}
	}

	~Zoo() {
		for (int i = 0;i < animalCount;++i) {
			delete animals[i];
		}
	}
		
	
};

int main() {
	srand(static_cast<unsigned int>(time(0)));
	Zoo zoo;
	for (int i = 0;i < 10;++i) {
		zoo.addAnimal(createRandomAnimal());
	}
	zoo.performActions();
	return 0;
}
