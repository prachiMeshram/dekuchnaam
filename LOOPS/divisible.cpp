#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {

     for(int i=1; i<100; i++)
     {
         if(i%3==0)
         {
             continue;
         }
         cout<<i<<endl;
     }
     
     return 0;
 }
 