#include <iostream>
#include <vector>
using namespace std;
int main (){
    int a,n;
    cin >>n >>a;
    if(n<1 || n>18 || a<1 || a>9){
        cout<<"输入范围：1<=n<=18，1<=a<=9"<<endl;
        return 0;
    }
    vector<long long> b(n,0);
    for (int i=1; i<=n ;++i){
        for(int j=0; j<i; ++j){
            b[i-1]*=10;
            b[i-1]+=a;
        }
    }
    long long sum=0;
    for (int i=0; i<n; ++i){
        sum+=b[i];
    }
    cout<<sum<<endl;
}

