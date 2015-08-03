#include <iostream>
#include "proxy.hpp"

using namespace std;

Subject::Subject()
{
}

Subject::~Subject()
{
}


ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::request()
{
    cout << "Subject is requesting ..." << endl;
}

Proxy::Proxy()
{
}

Proxy::Proxy(Subject* sub)
{
    _sub = sub;
}

Proxy::~Proxy()
{
    delete _sub;
    delete this;
}

void Proxy::request()
{
    cout << "Proxy is requesting ..." << endl;
    _sub->request();
}

