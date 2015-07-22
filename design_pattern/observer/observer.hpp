#include <string>
#include <vector>

class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer(){};

};

class Subject {
private:
    std::vector<Observer> observers;
    //std::string state;
    //std::string name;
public:
    void attach(Observer observer);
    //void detach(Observer observer);
    virtual void changeState();
    virutal void notify() = 0;
    virtual ~Subject(){};
};

class ConcreteSubject: public Subject {
private:
    std::string name;
    std::string state;
public:
    ConcreteSubject(string name, std::string state);
};

class ConcreteObserver: public Observer {
private:
    std::string name;
    Subject subject;
public:
    ConcreteObserver(Subject subject, std::string name);
    void update(std::string state);
};

