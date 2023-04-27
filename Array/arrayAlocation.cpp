#include <iostream>
using namespace std;
int main(){
    int array[]={5,6,7,8,9,10};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int array1[9];
    cin>>array1[0]>>array1[1];
    cout<<array1[0]+array[1];
}