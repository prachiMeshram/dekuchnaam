#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
    char button;
    cout<<"Input a character:";
    cin>>button;
     
    switch(button)
    {
        case 'a':
         cout<< "Namaste" << endl; 
         break;
        case 'b':
         cout<< "Hola" << endl;
        break;
        case 'c':
         cout<< "Hey" << endl; 
         break;
        case 'd':
         cout<< "Salot" << endl; 
         break;
        case 'e':
         cout<< "Ciao" << endl; 
         break;
        default :
        cout<<"I am still learning!"<<endl;
    }
    
     return 0;
 }
 