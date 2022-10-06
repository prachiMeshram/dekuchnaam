#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n1, n2;
    cin>>n1>>n2;
    
    char op;
    cout<<"Input an Operator\n";
    cin>>op;

    switch(op)
    {
        case '+' :
         cout<< n1 +  n2 << endl; 
         break;
        case '-' :
         cout<< n1 -  n2 << endl; 
         break;
        case '%' :
         cout<< n1 %  n2 << endl; 
         break;
        case '*' :
         cout<< n1 *  n2 << endl; 
         break;
        case '/' :
         cout<< n1 /  n2 << endl; 
         break;
        default:
          cout<<"Enter another operator"<<endl;
          break; 
        
    }
    
    return 0;
}
