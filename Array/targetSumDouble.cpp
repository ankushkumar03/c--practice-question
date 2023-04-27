#include <iostream>
using namespace std;
int main (){
    int array[]={4,3,8,1,6,5,2};
    int targetsum=7;
    int pairs=0;
    int size=7;
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (array[i]+array[j]==targetsum){
                pairs++;
            }
        }
        //  cout<<"Pairs is:"<<pairs<<endl;
    }
    cout<<pairs<<endl;
    cout<<"hello world !";
    return 0;
}