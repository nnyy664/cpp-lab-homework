#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double i,w;
    cin >>i;
    if (i<=100000){
        w=i*0.1;
    }else if(i>100000 && i<=200000){
        w=10000 + (i-100000)*0.075;
    }else if(i>200000 && i<=400000){
        w=17500 + (i-200000)*0.05;
    }else if(i>400000 && i<=600000){
        w=27500 + (i-400000)*0.03;
    }else if(i>600000 && i<=1000000){
        w=33500 + (i-600000)*0.015;
    }else{
        w=39500 + (i-1000000)*0.01;
    }
    cout<<setprecision(12)<<w<<"\n";
    return 0;
} 