#include <iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int A[r1][c1];
    for (int i=0; i<r1; i++){
        for (int j=0;j<c1; j++){
            cin>>A[i][j];
        }
        // cout<<"Enter first Matrices";
    }
    int r2,c2;
    cin>>r2>>c2;
    int B[r2][c2];
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            cin>>B[i][j];
        }
        // cout<<"Enter second Matrices";
    }
    if (c1!=r2){
        cout<<"Multiplication is not possible on the given matrices";
    }
    int c[r1][c2];
    for (int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int value=0;
            for (int k=0; k<r2; k++){
                value+=A[i][k]*B[k][j];
            }
            c[i][j]=value;
        }
    }
    for (int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}