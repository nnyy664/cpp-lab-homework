#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Cat{
    private:
    int numOfCat=10;
    public:
    int getNumOfCats(){
        return numOfCat;
    }
};

int main(){
    Cat c;
    cout<<c.getNumOfCats();
}
