#include "OrderList.h"

int OrderList::ListSize = 0;
int OrderList::AmountOfOrders = 0;
void OrderList::AddOrder(string name, string TypeOfWork, int price, int days, Worker* team, const int size /*const int groupSize, const int groupNumber*/)
{
	vector<string> group;
	WorkInfo.push_back(name);
	WorkInfo.push_back(TypeOfWork);
	WorkInfo.push_back(to_string(price));
	WorkInfo.push_back(to_string(days));
	if (size == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			WorkInfo.push_back(team[i].GetWorker());
			group.push_back(team[i].GetWorker());
			WorkersAge.insert(team[i].GetAge());
			WorkersAgeMulti.insert(team[i].GetAge());
			WorkersInfo.emplace(team[i].GetAge(), team[i].GetWorker());
			WorkersAgePriority.push(team[i].GetAge());

		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			WorkInfo.push_back(team[i].GetWorker());
			group.push_back(team[i].GetWorker());
			WorkersAge.insert(team[i].GetAge());
			WorkersAgeMulti.insert(team[i].GetAge());
			WorkersInfo.emplace(team[i].GetAge(), team[i].GetWorker());
			WorkersAgePriority.push(team[i].GetAge());
		}
	}

	OrdersList.push_back(WorkInfo);

	WorkInfo.clear();
	RequesterNames.emplace(name);
	WorkerGroups.push_back(group);
	Tasks.emplace(TypeOfWork);
	/*AmountOfOrders++;
	if (AmountOfOrders == 1)
	{
		this->TypeOfWork = new string[AmountOfOrders];
		this->price = new int[AmountOfOrders];
		this->days = new int[AmountOfOrders];
		this->name = new string[AmountOfOrders];
		this->TypeOfWork[0] = TypeOfWork;
		this->price[0] = price;
		this->days[0] = days;
		this->name[0] = name;
	}
	else
	{
		string* WorkBuffer = new string[AmountOfOrders];
		string* NameBuffer = new string[AmountOfOrders];
		int* PriceBuffer = new int[AmountOfOrders];
		int* DaysBuffer = new int[AmountOfOrders];
		for (int i = 0; i < AmountOfOrders-1; i++)
		{
			WorkBuffer[i] = this->TypeOfWork[i];
			PriceBuffer[i] = this->price[i];
			DaysBuffer[i] = this->days[i];
			NameBuffer[i] = this->name[i];
		}
		WorkBuffer[AmountOfOrders-1] = TypeOfWork;
		PriceBuffer[AmountOfOrders - 1] = price;
		DaysBuffer[AmountOfOrders - 1] = days;
		NameBuffer[AmountOfOrders - 1] = name;
		delete[] this->TypeOfWork;
		delete[] this->price;
		delete[] this->days;
		delete[] this->name;
		*&this->TypeOfWork = WorkBuffer;
		*&this->price = PriceBuffer;
		*&this->days = DaysBuffer;
		*&this->name = NameBuffer;
	}
	if ((groupNumber == groupSize) && size != 0)
	{
		ListSize = size;
		if (AmountOfOrders == 1)
		{
			teamList = new Worker * [AmountOfOrders];
			for (int i = 0; i < AmountOfOrders; i++)
			{
				teamList[i] = new Worker[size];
			}
			for (int i = 0; i < size; i++)
			{
				teamList[AmountOfOrders - 1][i] = team[i];
			}
		}
		else
		{
			Worker** teamListBuffer = new Worker * [AmountOfOrders];
			for (int i = 0; i < AmountOfOrders-1; i++)
			{
				teamListBuffer[i] = new Worker[3];
			}
			teamListBuffer[AmountOfOrders] = new Worker[size];
			for (int i = 0; i < 3; i++)
			{
				teamListBuffer[AmountOfOrders - 2][i] = teamList[AmountOfOrders - 2][i];
			}
			for (int i = 0; i < size; i++)
			{
				teamListBuffer[AmountOfOrders - 1][i] = team[i];
			}
			for (int i = 0; i < AmountOfOrders - 2; i++)
			{
				delete[] teamList[i];
			}
			delete[] teamList;
			*&teamList = teamListBuffer;
		}
	}
	else
	{
		if (AmountOfOrders == 1)
		{
			teamList = new Worker * [AmountOfOrders];
			for (int i = 0; i < AmountOfOrders; i++)
			{
				teamList[i] = new Worker[3];
			}
			for (int i = 0; i < 3; i++)
			{
				teamList[AmountOfOrders - 1][i] = team[i];
			}
		}
		else
		{
			Worker** teamListBuffer = new Worker * [AmountOfOrders];
			for (int i = 0; i < AmountOfOrders; i++)
			{
				teamListBuffer[i] = new Worker[3];
			}
			for (int i = 0; i < AmountOfOrders - 1; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					teamListBuffer[i][j] = teamList[i][j];
				}
			}

			for (int i = 0; i < 3; i++)
			{
				teamListBuffer[AmountOfOrders - 1][i] = team[i];
			}
			for (int i = 0; i < AmountOfOrders - 2; i++)
			{
				delete[] teamList[i];
			}
			delete[] teamList;
			*&teamList = teamListBuffer;
		}
	}*/
}

void OrderList::ShowOrders()
{
	int key = 1;
	for (list<vector<string>>::iterator it1 = OrdersList.begin(); it1 != OrdersList.end(); ++it1)
	{
		vector<string>::iterator it2;
		for (it2 = (*it1).begin(); it2 != (*it1).end(); ++it2)
		{
			if (ForCout[key] != "Worker: ")
				cout << ForCout[key++] << *it2 << endl;
			else
			{
				cout << ForCout[key] << *it2 << endl;
			}
		}
		key = 1;
	}
	/*for (int i = 0; i < AmountOfOrders; i++)
	{
		cout << "Requester: " << this->name[i] << endl;
		cout << "Type of Work: " << this->TypeOfWork[i] << endl;
		cout << "Price: " << this->price[i] << endl;
		cout << "Days: " << this->days[i] << endl;
		cout << "Workers in this task: ";
		for (int  j = 0; j < 3; j++)
		{
			cout << this->teamList[i][j].GetWorker()<<" ";
		}
		cout << endl;
	}*/
}

void OrderList::WriteToFile()
{
	fstream fs;
	fs.open("Order.txt", fstream::in | fstream::out);

	if (!fs.is_open())
	{
		cout << "ERROR!" << endl;
	}
	else
	{
		int key = 1;
		for (list<vector<string>>::iterator it1 = OrdersList.begin(); it1 != OrdersList.end(); ++it1)
		{
			vector<string>::iterator it2;
			for (it2 = (*it1).begin(); it2 != (*it1).end(); ++it2)
			{
				fs << *it2 << endl;
			}

		}
		/*for (int i = 0; i < AmountOfOrders; i++)
		{
			fs << "Requester: " << this->name[i] << endl;
			fs << "Type of Work: " << this->TypeOfWork[i] << endl;
			fs << "Price: " << this->price[i] << endl;
			fs << "Days: " << this->days[i] << endl;
			fs << "Workers in this task: ";
			for (int j = 0; j < 3; j++)
			{
				fs << this->teamList[i][j].GetWorker() << " ";
			}
			fs << endl;
		}*/
	}
}

void OrderList::ShowRequesterNames()
{
	while (!RequesterNames.empty())
	{
		cout << RequesterNames.top() << endl;;
		RequesterNames.pop();
	}
}

void OrderList::ShowWorkerGroups()
{

	for (int i = 0; i < WorkerGroups.size(); i++)
	{
		for (int j = 0; j < WorkerGroups[i].size(); j++)
		{
			cout << WorkerGroups[i][j] << endl;
		}
		cout << endl;
	}
}

void OrderList::ShowWorkersAge()
{
	for (auto it : WorkersAge)
		cout << "Age amoung workers: " << it << endl;
}

void OrderList::ShowTasks()
{
	while (!Tasks.empty())
	{
		cout << Tasks.front() << endl;;
		Tasks.pop();
	}
}

void OrderList::ShowWorkersAgeMulti()
{
	for (auto it : WorkersAgeMulti)
		cout << "Age: " << it << endl;
}

void OrderList::ShowWorkersAgePriority()
{
	while (!WorkersAgePriority.empty())
	{
		cout << WorkersAgePriority.top() << endl;;
		WorkersAgePriority.pop();
	}
}



void OrderList::ShowWorkerInfo(int age)
{
	auto it = WorkersInfo.find(age);
	cout << "Age: " << it->first << " " << "Name: " << it->second << endl;

}





OrderList::OrderList()
{
	ForCout.emplace(1, "Requester: ");
	ForCout.emplace(2, "Type of Work: ");
	ForCout.emplace(3, "Price: ");
	ForCout.emplace(4, "Days: ");
	ForCout.emplace(5, "Worker: ");
}

OrderList::~OrderList()
{
	/*delete[] this->name;
	delete[] this->price;
	delete[] this->TypeOfWork;
	delete[] this->days;
	for (int i = 0; i < AmountOfOrders - 1; i++)
	{
		delete[] teamList[i];
	}
	delete[] teamList;*/
}
