#include <iostream>
using namespace std;
int x,y,d;
//using extendeuclid we can find gcd of a,b and co-efficient of a and b . 

void extendedeuclid(int a,int b)
{
    if(b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else 
    {
        extendedeuclid(b,a%b);
        int temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    //A.x+B.y=GCD(A,B). 
    extendedeuclid(a,b);
    cout << "The gcd of " << a << " and " << b << " is " << d << endl;
    cout << endl;
    cout << "Co-efficents of a and b are " << x << " and " << y << endl;
    //co-efficent of a and b are x and y  
}