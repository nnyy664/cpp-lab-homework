#include <iostream>
using namespace std;

short int chufa(short int x,short int y){
    if (y==0)return -1;
    return (short int)x/y;
}

int main(){
    short int x,y;
    cin>>x>>y;
    cout<< chufa(x,y);
}