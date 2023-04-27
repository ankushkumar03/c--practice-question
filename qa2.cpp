#include <iostream>
using namespace std;
int main(){
    int q,p;
    cin>>q>>p;
    if (q>100)
    {
       cout<<(q*p)-(0.1*(q*p)); 
    }
    else {
        cout<<(q*p);
    }
    
    return 0;
}