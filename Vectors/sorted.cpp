#include <iostream>
using namespace std;
int main(){
    int array[6];
    for (int i=0; i<6; i++){
        cin>>array[i];
    }
    bool sort=true;
    for (int i=1; i<6; i++){
        if (array[i]<=array[i-1]){
            sort = false;
        }
        cout<<sort<<endl;
    }
    return 0;
}