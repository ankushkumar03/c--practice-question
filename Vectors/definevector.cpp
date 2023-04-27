#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    cout <<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(18);
    cout <<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
}