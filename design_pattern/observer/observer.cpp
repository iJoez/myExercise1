#include "observer.hpp"
using namespace std;

ConcreteObserser::ConcreteObserver(Subject subject, string name)
{
    this->name = name;
    this->subject = subject;
}

void ConcreteObserser::update(string state)
{
    cout << name << "'s state has changed into " << state << endl;
}

void Subject::attach(Observer ob)
{
    observsers.push_back(ob);
}

void Subject::changeState(string state)
{
    this->state = state;
}

void ConcreteSubject::ConcreteSubject(string name, string state)
{
    this->state = state;
    this->name = name;
}

void ConcreteSubject::notify()
{
    for (vector<Observer>::iterator it = observers.begin();
         it != observers.end();
         it ++)
    {
        it.update(state);
    }
}
