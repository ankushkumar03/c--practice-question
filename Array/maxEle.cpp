#include <iostream>
using namespace std;
int main(){
    int array[]={5,14,17,11,54,65};
    int max=array[0];
    
    for (int i=1;i<=5;i++){
        if (array[i]>max){
            max =array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}