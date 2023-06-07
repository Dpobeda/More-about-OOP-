#pragma once
#include <string>
#include "Animal.h"
#include "vector"


class ZooShop
{
private:
	std::vector <Animal*> _animals;
public:
	void AddAnimal(Animal* animal);

	void AddAnimal();

	void DeleteAnimal(std::string name);

	void ChangeAnimal(Animal* animal);
};