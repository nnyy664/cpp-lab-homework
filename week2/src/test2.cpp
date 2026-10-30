#include <iostream>
using namespace std;
bool is_prime(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    for (int i=3; i<n/i; i+=2){
        if(n%i==0) {
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout << is_prime(n);
}