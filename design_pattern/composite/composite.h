#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <vector>

class Component {
public:
    Component();
    virtual ~Component();
    virtual void add(Component&);
    //virtual void remove(Component*);
    virtual void operation() = 0;
    Component* getChild(int);
};

class Composite: public Component {
public:
    Composite();
    ~Composite();
    void add(Component *com);
    //void remove(Component *com);
    void operation();
    Component* getChild(int);
private:
    std::vector<Component*> _comVec;
};


class Leaf: public Component {
public:
    Leaf();
    ~Leaf();
    void operation();
};

#endif
