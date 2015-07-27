#include "observer.hpp"
#include <iostream>
using namespace std;
Observer::Observer()
{
	_state = '\0';
}
ConcreteObserver::ConcreteObserver(Subject *subject, string name)
{
    this->_name = name;
    this->_sub = subject;
	_sub->attach(this);
}

void ConcreteObserver::update(Subject *sub)
{
	this->_state = sub->getState();
    cout << getName() << "'s state has changed into " << getState() << endl;
}

string ConcreteObserver::getState()
{
	return _state;
}

string ConcreteObserver::getName()
{
	return _name;
}

void Subject::attach(Observer *ob)
{
    observers.push_back(ob);
}

Subject *ConcreteObserver::getSubject()
{
	return _sub;
}

#if 0
void Subject::changeState(string state)
{
    this->state = state;
}
#endif

ConcreteSubject::ConcreteSubject()
{
}

string ConcreteSubject::getState()
{
    return _state;
}

void ConcreteSubject::setState(State state)
{
    this->_state = state;
}

void Subject::notify()
{
    for (vector<Observer*>::iterator it = observers.begin();
         it != observers.end();
         it ++)
    {
        (*it)->update(this);
    }
}
