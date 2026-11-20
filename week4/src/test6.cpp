#include <iostream>
using namespace std;
int main(){
    double arr[]={1,2,3};
    double *p=reinterpret_cast<double *>(&arr[0]);
    *p=5;//原来用double指针写int数组，类型不匹配会导致未定义行为
    //这里把arr改为double数组，使指针类型与数组元素类型一致
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
}