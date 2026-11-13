#include "friend.h"
int main(){
    X x;
    Y y;
    Z z;

    X* p=&x;
    y.g(p);
    z.f(p);
    h(p);

    x.print();
}
