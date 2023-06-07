#include "ZooShop.h"
#include <iostream>

void ZooShop::AddAnimal()
{
	std::string gender;
	std::string name;
	float price;
	int amount;

	std::cout << "Enter gender: " << "\n";
	std::getline(std::cin, gender);

	std::cout << "Enter name: " << "\n";
	std::getline(std::cin, name);

	std::cout << "Enter price: " << "\n";
	std::cin >> price;

	std::cout << "Enter amount: " << "\n";
	std::cin >> amount;

	Animal* animal = new Animal(gender, name, price, amount);
	_animals.push_back(animal);
}
	
void ZooShop::AddAnimal(Animal* animal)
{
	{
		_animals.push_back(animal);
	}
}
	
void ZooShop::DeleteAnimal(std::string name)
{
	int index = 0;
	for (const auto& it : _animals)
	{
		if (it->GetName() == name)
		{
			_animals.erase(_animals.begin() + index);
			delete(it);
			return;
		}
		index++;
	}
}

void ZooShop::ChangeAnimal(Animal* animal) 
{
	std::string gender;
	std::string name;
	float price;
	int amount;

	system("cls");
	std::cout << "What do you want to change: " << "\n";
	std::cout << "1 - Gender" << "\n";
	std::cout << "2 - Name" << "\n";
	std::cout << "3 - Price" << "\n";
	std::cout << "4 - Amount" << "\n";

	int input;

	std::cin >> input;

	system("cls");

	switch (input)
	{
	case 1:
		std::cout << "Enter a new Gender: " << "\n";
		std::getline(std::cin, gender);
		animal->SetGender(gender);
		break;

	case 2:
		std::cout << "Enter a new Name: " << "\n";
		std::getline(std::cin, name);
		animal->SetName(name);
		break;

	case 3:
		std::cout << "Enter a new Price: " << "\n";
		std::cin >> price;
		animal->SetPrice(price);
		break;

	case 4:
		std::cout << "Enter a new Amount: " << "\n";
		std::cin >> amount;
		animal->SetAmount(amount);
		break;

	default:
	}
}