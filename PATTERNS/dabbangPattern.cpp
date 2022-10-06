#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    
    for( int row=1; row <= n; row++){
        for(int col= 1; col <= n; col++ ){
            if( col <= n - row + 1 ){
                cout<< col;
            }
            else{
                cout<<"*";
            }
        }
        int count = n;
        for(int col= n+1; col <= 2*n; col++ ){
            if(col < n+row ){
                cout<<"*";
            }
            else{
                cout<< count;
            }
            count--;
        }
        cout << endl;
    }
    
    
    
    return 0;
}
   


    //  12345 54321
    //  1234* *4321
    //  123** **321
    //  12*** ***21
    //  1**** ****1