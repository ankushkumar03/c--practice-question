#include <iostream>
using namespace std;
int main (){
    int array[6];
    for (int j=0;j<6;j++){
        cin>>array[j];
    }
    int difference= 0;
    for (int i=0; i<6;i++){
        if(i%2==0){
            difference+=array[i];
        }
        else {
            difference-=array[i];
        }
    }
    cout<<difference<<endl;
    
    return 0;
}