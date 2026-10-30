#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int x,int y){
    int t;
    while (y!=0){
        t = x % y;
        x=y;
        y=t;
    }
    return abs(x);
}
int lcm(int x,int y){
    return x*y/gcd(x,y);
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<< gcd(x,y)<<" "<<lcm(x,y);
}