// Write a program to output whether a number is divisible by both 2 and 3 or divisible by onli one of them.

#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
     int n ;
     cin>>n;

     if (n%2==0 && n%3==0){
         cout<<"Divisible by both"<<endl;
     }
     else if (n%2==0){
         cout<<"Divisible by onli 2"<<endl;
     }
     else if (n%3==0){
         cout<<"Divisibe by onli 3"<<endl;
     }
     else{
         cout<<"Divisible by none"<<endl;
     }
     
     return 0;
 }
  