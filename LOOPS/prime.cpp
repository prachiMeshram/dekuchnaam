#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
     int n,i;
     cin>>n;
    
     for(int i=1; i<n; i++)
     {
         if(n%i==0){
             cout<<"Non Prime"<<endl;
             break;
         }
     }
     if(i==n){
         cout<<"Prime"<<endl;
     }

     return 0;
 }
 