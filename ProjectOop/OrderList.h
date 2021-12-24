#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Worker.h"
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<set>
#include<algorithm>

using namespace std;

class OrderList
{
public:

	void AddOrder(string name, string TypeOfWork, int price, int days, Worker* team, const int size /*const int groupSize, const int groupNumber*/);
	void ShowOrders();
	void WriteToFile();
	void ShowRequesterNames();
	void ShowWorkerGroups();
	void ShowWorkersAge();
	void ShowTasks();
	void ShowWorkersAgeMulti();
	void ShowWorkersAgePriority();
	void ShowWorkerInfo(int age);
	OrderList();
	~OrderList();
private:
	static int ListSize;
	static int AmountOfOrders;
	string* TypeOfWork;
	string* name;
	int* price;
	int* days;
	Worker** teamList;
	vector<string> WorkInfo;
	list<vector<string>> OrdersList;
	map<int, string> ForCout;
	stack<string> RequesterNames;
	deque<vector<string>> WorkerGroups;
	queue<string> Tasks;
	set<int> WorkersAge;
	multiset<int> WorkersAgeMulti;
	multimap<int, string> WorkersInfo;
	priority_queue<int> WorkersAgePriority;
};

