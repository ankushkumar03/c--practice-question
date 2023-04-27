#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a>1000)
    {
        cout<<(a-a*10/100)*b<<endl;

    }
    else{
        cout<<a*b;
    }
    
    return 0;
}