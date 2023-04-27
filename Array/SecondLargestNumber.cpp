#include <iostream>
using namespace std;

int largestElementIndex(int array[],int size){
int max=0;
int maxIndex=-1;
for(int i=0; i<size; i++){
    if (array[i]>max){
        max=array[i];
        maxIndex=i;
    }
}
return maxIndex;
}

int main(){
int array[]={1,2,5,6,7,4,3};
int n=7;
int IndexOfLargest= largestElementIndex(array,n);
cout<<array[IndexOfLargest]<<endl;

// array[IndexOfLargest]=-1;
int largestElement=array[IndexOfLargest];
for(int i=0; i<n; i++){
    if(array[i]==largestElement){
        array[i]=-1;
    }
}
int indexOfSecondLargest= largestElementIndex(array,n);
cout<<array[indexOfSecondLargest]<<endl;
return 0;
}