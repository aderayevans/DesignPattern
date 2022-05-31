#include "Teacher.h"
#include "Observer.h"

void Teacher::attach(Observer* o) {
	observers.push_back(o);

}

void Teacher::detach(Observer* o) {
	observers.remove(o);

}

void Teacher::notify(std::string msg) {
	for (Observer *o : observers)
		o->getMessage(msg);
}

