// SUM OF FIRST n Natural NUMBERS

#include <iostream>
using namespace std;

int sumTillN(int n){
    int sum = n*(n+1)/2;
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n; 

    cout<<sumTillN(n)<<endl;

    return 0;
}
