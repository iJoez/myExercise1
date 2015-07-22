#include "observer.hpp"

int main()
{
    Subject sub = new ConcreteSubject("Design Pattern", "init");
    Observer ob1 = new ConcreteObserver(sub, "ob1");
    Observer ob2 = new ConcreteObserver(sub, "ob2");

    sub.attach(ob1);
    sub.attach(ob2);
    sub.changeState("change 1");
    sub.notify();
}
