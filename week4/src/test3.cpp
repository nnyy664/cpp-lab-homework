#include <iostream>
using namespace std;

const int pi=3;
class SimpleCircle{
    public: 
    int* itsRadius;

    int area(){
        return pi * *itsRadius * *itsRadius;
    }
    int permimeter(){
        return pi * *itsRadius * 2;
    }
};
int main(){
    int r=2;
    SimpleCircle circle1;
    circle1.itsRadius = &r;

    int area_circle1= pi*r*r;
    int permimeter_circle1=pi*2*r;

    if(area_circle1 == circle1.area()) {
        cout << "the area is right\n";
    } else{
        cout << "the area is false\n";
    }

    if(permimeter_circle1 == circle1.permimeter()) {
        cout << "the permimeter is right\n";
    } else{
        cout << "the permimeter is false\n";
    }
}

