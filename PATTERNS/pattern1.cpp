// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++){
        int count = 1;
        for ( int col = 1; col <= n; col++){
            if( (col <= n-row+1) ){
                cout << count;
                count++;
            }
            else{
                cout<<"*";
            }
        }
        int count2 = n;
        for ( int col = 2*n; col <= 1; col--){
            if( (col >= 2*n -row+1) ){
                cout << count;
                count--;
            }
            else{
                cout<<"*";
            }
        cout<< endl;
        }
    }
    return 0;
        
}


    //  12345 54321
    //  1234* *4321
    //  123** **321
    //  12*** ***21
    //  1**** ****1



