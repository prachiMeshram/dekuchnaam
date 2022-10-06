// PASCAL TRIANGLE
// 1
// 1 1 
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1


#include <iostream>
using namespace std;

int fact(int n){
    int factorial= 1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++){
        for(int j=0l; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}