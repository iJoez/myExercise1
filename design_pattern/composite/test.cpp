#include <iostream>
#include "composite.h"

using namespace std;

int main()
{
    Leaf *leaf = new Leaf();
    leaf->operation();

    Component *com = new Composite();
    com->add(leaf);
    com->operation();
    cout << "getChild(0) = " << com->getChild(0) << endl;

    cout << "=========================" << endl;

    Composite *composite = new Composite();
    composite->add(leaf);
    composite->operation();

    cout << "=========================" << endl;

    //Component *ll = com->getChild(0);
    //ll->operation();

}
