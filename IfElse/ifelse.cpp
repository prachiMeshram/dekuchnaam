#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int savings;

    //cout<<"Enter your savings\n";
    
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha\n"; 
        } else {
            cout<<"Shopping with Neha\n";
        }
    } else if(savings>2000){
        cout<<"Rashmi\n";
    } else {
        cout<<"Friends\n";
    }

    return 0;
}
