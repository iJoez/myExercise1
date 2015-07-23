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
}

class proxy {
public:
    proxy();
    proxy(Subject* sub);
    ~proxy();
    void reuqest();

protected:
    Subject* _sub;
};


#endif //_PROXY_H_
