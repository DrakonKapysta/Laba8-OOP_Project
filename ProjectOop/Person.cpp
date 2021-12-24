#include "Person.h"

void Person::GetMessage()
{
	cout << "I am a person" << endl;
}

void Person::SetName(string name)
{
	this->name = name;
}
void Person::SetAge(int age)
{
	this->age = age;
}
string Person::GetName()
{
	return this->name;
}

int Person::GetAge()
{
	return this->age;
}

Person& Person::operator=(const Person& other)
{
	this->age = other.age;
	this->name = other.name;
	return *this;
}

bool Person::operator==(const Person& other)
{
	return this->age == other.age;
}

bool Person::operator!=(const Person& other)
{
	return !(this->age == other.age);
}

bool Person::operator>(const Person& other)
{
	return this->age > other.age;
}

bool Person::operator<(const Person& other)
{
	return this->age < other.age;
}

bool Person::operator<=(const Person& other)
{
	return this->age <= other.age;
}

bool Person::operator>=(const Person& other)
{
	return this->age >= other.age;
}

Person Person::operator+(const Person& other)
{
	Person temp;
	temp.age = this->age + other.age;
	return temp;
}

Person Person::operator-(const Person& other)
{
	Person temp;
	temp.age = this->age - other.age;
	return temp;
}

Person Person::operator*(const Person& other)
{
	Person temp;
	temp.age = this->age * other.age;
	return temp;
}

Person Person::operator%(const Person& other)
{
	Person temp;
	temp.age = this->age % other.age;
	return temp;
}

Person& Person::operator+=(const Person& other)
{
	this->age += other.age;
	return *this;
}

Person& Person::operator-=(const Person& other)
{
	this->age -= other.age;
	return *this;
}

Person& Person::operator*=(const Person& other)
{
	this->age *= other.age;
	return *this;
}

Person& Person::operator%=(const Person& other)
{
	this->age %= other.age;
	return *this;
}

Person& Person::operator++()
{
	this->age++;
	return *this;
}

Person Person::operator++(int value)
{
	Person temp(*this);
	this->age++;
	return temp;
}

Person& Person::operator--()
{
	this->age--;
	return *this;
}

Person Person::operator--(int value)
{
	Person temp(*this);
	this->age--;
	return temp;
}

int& Person::operator[](int index)
{
	return this->arr[index];
}

int Person::operator()(int a, int b)
{
	string choose;
	cout << "Choose operation: plus, addition, times, divides, equal_to, not_equal_to, greater, less, greater_equal, less_equal" << endl;
	cin >> choose;
	if (choose == "plus")
		return a + b;
	if (choose == "addition")
		return a - b;
	if (choose == "times")
		return a * b;
	if (choose == "divides")
		return a / b;
	if (choose == "equal_to")
		return a == b;
	if (choose == "not_equal_to")
		return !(a == b);
	if (choose == "greater")
		return a > b;
	if (choose == "less")
		return a < b;
	if (choose == "greater_equal")
		return a >= b;
	if (choose == "less_equal")
		return a <= b;
}

int Person::operator()(int a)
{
	return -a;
}

Person::Person(const Person& other)
{
	this->age = other.age;
	this->name = other.name;
}

Person::Person()
{
}
