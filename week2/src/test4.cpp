#include <iostream>
#include <vector>
using namespace std;
int Fibo(int n){
    int a=1,b=1,c;
    if(n==1 || n==2) return 1;
    for(int i=3; i<=n; i++){
        c=b;
        b+=a;
        a=c;
    }
    return b;
}
 int main(){
    int n;
    cin>>n;
    cout << Fibo(n);
 }