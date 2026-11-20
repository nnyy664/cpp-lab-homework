#include <iostream>
using namespace std;
int main(){
    int x=0;
    int *p=&x;
    *p=9;
    cout<<"the value at p:"<<*p;
    return 0;
} 