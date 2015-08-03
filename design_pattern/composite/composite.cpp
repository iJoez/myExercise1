#include <iostream>
#include "composite.h"

using namespace std;

Component::Component()
{
}

Component::~Component()
{
}

void Component::add(Component &com)
{
}

#if 0
void Component::remove(Component *com)
{
}
#endif

Component* Component::getChild(int index)
{
    return 0;
}

Composite::Composite()
{
}

Composite::~Composite()
{
}

void Composite::add(Component* com)
{
    _comVec.push_back(com);
}

#if 0
void Composite::remove(Component *com)
{
    _comVec.erase(&com);
}
#endif

void Composite::operation()
{
    for(vector<Component*>::iterator it = _comVec.begin();
        it != _comVec.end();
        it++)
    {
        (*it)->operation();
    }
}

Component* Composite::getChild(int index)
{
    return _comVec[index];
}

Leaf::Leaf()
{
}

Leaf::~Leaf()
{
}

void Leaf::operation()
{
    cout << "Leaf's operation" << endl;
}
