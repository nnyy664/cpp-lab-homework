#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    long long n;
    cin>> n;
    string s=to_string(n);
    string t=s;
    reverse(s.begin(),s.end());
    if(s==t){cout<<"是\n";}
    else{cout<<"不是\n";}
}