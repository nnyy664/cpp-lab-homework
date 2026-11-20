#include<iostream>
#include<string>
using namespace std;

int count_letter(const string& s){
    int count=0;

    for(char x: s){
        if((x>='A' && x<='Z') || (x>='a' && x<='z')){
            count++;
        }
    }

    return count;
}

int main(){
    string sentense;
    getline(cin,sentense);

    cout << "the number of letter in the sentense is " 
    <<count_letter(sentense) << endl;
}