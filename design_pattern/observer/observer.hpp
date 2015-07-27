#include <string>
#include <vector>

typedef std::string State;
class Subject;

class Observer {
public:
    virtual void update(Subject *sub) = 0;
    virtual ~Observer(){};
protected:
	Observer();
	State _state;
};

class ConcreteObserver: public Observer {
private:
    std::string _name;
    Subject *_sub;
public:
    ConcreteObserver(Subject *subject, std::string name);
	State getState();
	std::string getName();
	Subject *getSubject();
    void update(Subject *sub);
};

class Subject {
private:
    std::vector<Observer*> observers;
    //std::string state;
    //std::string name;
public:
    void attach(Observer *observer);
    //void detach(Observer observer);
    //virtual void changeState();
    virtual State getState() = 0;
    virtual void setState(const State st) = 0;
    void notify();
    virtual ~Subject(){};
};

class ConcreteSubject: public Subject {
private:
    State _state;
public:
    ConcreteSubject();
	void setState(State state);	
	State getState();	
};

