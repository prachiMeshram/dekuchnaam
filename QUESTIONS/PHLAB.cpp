#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()

{
    long double F, u, n, i, r, x;
    cout<<"Enter u: ";
    cin>>u;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter i: ";
    cin>>i;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"F: "<<(u*n*i*(r*r))/(2*pow((r*r+x*x), 1.5));

    getch();
    return(0);
}