#include <iostream>
using namespace std;
int main (){
    int array[]={1,4,3,2,0,5,2};
    int size=7;
    int targetsum=5;
    int tripletsum=0;
    for (int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if (array[i]+array[j]+array[k]==targetsum){
                    tripletsum++;
                }
            }
        }
    }
    cout<<"Tripletsum is:"<<tripletsum<<endl;

    return 0;
}