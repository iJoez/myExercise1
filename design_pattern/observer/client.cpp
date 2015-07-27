#include "observer.hpp"

int main()
{
    ConcreteSubject* sub = new ConcreteSubject();
    Observer *ob1 = new ConcreteObserver(sub, "ob1");
    Observer *ob2 = new ConcreteObserver(sub, "ob2");

    sub->setState("New");
    sub->notify();
    sub->setState("Old");
    sub->notify();

    delete ob1;	
    delete ob2;	
    delete sub;

    return 0;
}
