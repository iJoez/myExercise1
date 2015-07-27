#ifndef _PROXY_H_
#define _PROXY_H_

class Subject {
public:
    virtual ~Subject(); 
    virtual void request() = 0;

protected:
    Subject();

};

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();
    void request();
    ~ConcreteSubject();
};

class Proxy {
public:
    Proxy();
    Proxy(Subject* sub);
    ~Proxy();
    void request();

private:
    Subject* _sub;
};


#endif //_PROXY_H_
