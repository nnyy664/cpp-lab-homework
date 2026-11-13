#include <iostream>
class X;

class Y{
    public:
    void g(X* p);
};

class X{
    private:
    int i=0;
    friend void Y::g(X* p);
    friend class Z;
    friend void h(X* p);
    public:
    void print(){
        std::cout << i <<"\n";
    }
};

class Z{
    public:
    void f(X* p);
};

void Z::f(X* p){
    p->i+=5;
}

void Y::g(X* p){
    p->i++;
}

void h(X* p){
    p->i+=10;
}
