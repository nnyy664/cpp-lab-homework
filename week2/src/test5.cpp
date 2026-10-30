#include <iostream>
using namespace std;
int getPower(int x,int y){
    if(y<0){return 0;}
    else if(y==0){return 1;}
    else {
        int z=1;
        for (int i=0; i<y; i++){
            z*=x;
        }
        return z;
    }
}
double getPower(double x,int y){
    double z=1;
    if(y>0){
        for (int i=0; i<y; i++){
            z*=x;
        }
    }else if(y==0){z=1;}
    else {
        for (int i=0; i>y; i--){
            z*=x;
        }
        z=1/z;
    }
    return z;
}
int main (){
    int a,m;
    double b;
    cin>>a>>b;
    cin>>m;
    if(m<0&&(a==0||b==0)){
        cout<<"底数为0时，指数不能为负数";
        return 1;
    }
    cout <<getPower(a,m)<<" "<<getPower(b,m);
}