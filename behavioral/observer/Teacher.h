#pragma once
#include "Observable.h"
#include "Observer.h"
#include <list>
class Teacher : public Observable {
	std::list<Observer*> observers;

public:
	void attach(Observer* o);
	void detach(Observer* o);
	void notify(std::string msg);
};

