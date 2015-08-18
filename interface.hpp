// Simulate the interface of Java using virutal base class
// Difference between Java'sinterface and virtual base class:
// virtual base class:
// - allows non-virtual function
// - allows complicated inherence ?
class Interface {
public:
    virtual ~Interface(){}
    virtual void foo(int) = 0;
};

class Impl : public Interface {
public:
    virtual void foo(int) {}
}
