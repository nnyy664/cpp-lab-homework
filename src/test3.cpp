#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>> s;
    string t=s;
    reverse(s.begin(),s.end());
    if(s==t){cout<<"是\n";}
    else{cout<<"不是\n";}
}