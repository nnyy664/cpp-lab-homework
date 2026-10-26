#include <iostream>
using namespace std;

bool judge(int n){
    int a=n/100;
    int b=(n-a*100)/10;
    int c=n-a*100-b*10;
    if (n==a*a*a + b*b*b + c*c*c) return true;
    else return false;
}

int main(){
    for (int i=100; i<1000; ++i){
        if(judge(i)){cout<<i<<" ";}
    }
}