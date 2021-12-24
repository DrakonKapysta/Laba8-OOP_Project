#include "Customer.h"

template<typename T1, typename T2, typename T3>
Customer<T1, T2, T3>::Customer()
{
}

template<typename T1, typename T2, typename T3>
Customer<T1, T2, T3>::Customer(T1 name, T1 TypeOfWork, T3 price, T2 days)
{
	//BecomeRich();
	//this->Family = "Married";
	//this->SetAge(23);
	this->SetName(name);
	this->TypeOfWork = TypeOfWork;
	this->price = price;
	this->days = days;
}
template<typename T1, typename T2, typename T3>
void Customer<T1, T2, T3>::SetRequest(T1 name, T1 TypeOfWork, T3 price, T2 days)
{
	if (price < 0 || days < 0)
	{
		if (price < 0)
			throw exception("�i�� �� ���� ���� �i�'�����!");

		else
			throw exception("�i���i��� ��i� �� ������ ���� �i�'������!");
	}
	this->SetName(name);
	this->TypeOfWork = TypeOfWork;
	this->price = price;
	this->days = days;
}

template<typename T1, typename T2, typename T3>
void Customer<T1, T2, T3>::SetWorkType(T1 TypeOfWork)
{
	this->TypeOfWork = TypeOfWork;
}

template<typename T1, typename T2, typename T3>
void Customer<T1, T2, T3>::SetDays(T2 days)
{
	this->days = days;
}

template<typename T1, typename T2, typename T3>
T1& Customer<T1, T2, T3>::GetTypeOfWork()
{
	return this->TypeOfWork;
}

template<typename T1, typename T2, typename T3>
T1 Customer<T1, T2, T3>::GetCustomerName()
{
	return this->GetName();
}

template<typename T1, typename T2, typename T3>
T2& Customer<T1, T2, T3>::GetPrice()
{
	return this->price;
}

template<typename T1, typename T2, typename T3>
T2& Customer<T1, T2, T3>::GetDays()
{
	return this->days;
}


template<typename T1, typename T2, typename T3>
void Customer<T1, T2, T3>::SetPrice(T2 price)
{
	this->price = price;

}
template<typename T1, typename T2, typename T3>
Customer<T1, T2, T3>::~Customer()
{
}


template<typename T1, typename T2, typename T3>
Customer<T1, T2, T3>::Customer(const Customer& other)
{
	this->TypeOfWork = other.TypeOfWork;
	this->price = other.price;
	this->days = other.days;
}
//template<typename T1, typename T2, typename T3>
//void Customer<T1, T2, T3>::HaveAbaby()
//{
//	this->Child = "Have a baby";
//}
