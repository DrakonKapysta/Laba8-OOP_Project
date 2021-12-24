#pragma once
#include<iostream>
#include<string>
#include"Person.h"

using namespace std;

class Worker : public Person
{
public:
	Worker(string name);
	Worker();
	void GetMessage();
	string GetWorker();
	void SetWorkBool(bool& IfWork);
	bool& ShowWorkBool();
	void setBool();
	string name;



private:
	/*string name_p;*/
	bool IfWork;
};

