#include "Worker.h"


Worker::Worker(string name) :
	IfWork(false)
{
	this->SetName(name);
	this->name = GetName();
}

Worker::Worker() {}

void Worker::GetMessage()
{
	cout << "I am a worker" << endl;
}

string Worker::GetWorker()
{
	return this->GetName();

}
bool& Worker::ShowWorkBool()
{
	return this->IfWork;
}
void Worker::setBool()
{
	this->IfWork = true;
}
void Worker::SetWorkBool(bool& IfWork)
{
	this->IfWork = IfWork;
}
;
