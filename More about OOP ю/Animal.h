#pragma once
#include <string>

class Animal
{
private:
	std::string _gender;
	std::string _name;
	float _price;
	int _amount;
public:

	Animal(std::string gender, std::string name, float price, int amount) : _gender(gender) , _name(name) , _price (price) , _amount(amount){}

	std::string GetGender();
	void SetGender(std::string gender);

	std::string GetName();
	void SetName(std::string name);
	
	float GetPrice();
	void SetPrice(float price);
	
	int GetAmount();
	void SetAmount(int amount);

};

class Cat : public Animal
{
public:
	Cat(std::string gender, std::string name, float price, int amount) : Animal(gender, name, price, amount){}
};