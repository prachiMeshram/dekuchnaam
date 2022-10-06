// CHECK PYTHAGOREAN TRIPLET

#include <iostream>
using namespace std;

bool check(int x, int y, int z,)
{
    int a = max(x, max(y,z));
    int b,c;

    if(a == x)
    {
        b=y;
        c = z;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c){
        return true;
    }
    else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythoagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet";
    }

    return 0;
}
