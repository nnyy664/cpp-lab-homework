#include <iostream>
using namespace std;

int main(){
    int score;
    cin >>score;
    if(score==10 || score==9){
        cout <<"你认为电影经典\n";
    }else if (score==8 || score==7){
        cout <<"你认为电影非常好\n";
    }else if ( score==6||score==5){
        cout <<"你认为电影一般\n";
    }else{
        cout<<"你认为电影是烂片\n";
    }
}