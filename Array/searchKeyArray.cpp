#include <iostream>
using namespace std;
int main (){
    int array[6];
    for (int idx=0; idx<6; idx++){
        cin>>array[idx];
    }
    int key;
    cin>>key;
    int ans =0;
    for (int i=0;i<6; i++){
        if (array[i]==key){
            ans=i;
        }
    }
    cout<<"answer is:"<<ans<<endl;
    return 0;
}