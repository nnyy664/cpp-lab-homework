#include<iostream>
#include<string>
using namespace std;

void reverse(string &s){
    if(s.size() < 2) return;

    char first = s.front();
    char last = s.back();
    string middle = s.substr(1, s.size() - 2);    

    reverse(middle);
    s=last + middle + first;
}

int main (){
    string s;
    cin>>s;
    reverse(s);
    cout << s;
}