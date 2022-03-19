#include <iostream>
using namespace std;
int d = 0,x,y;
//using extendeuclid we can find gcd of a,b and co-efficient of a and b . 
//co-efficient of a is x and co-efficient of b is y
// co-efficient of a is x, which is the modular multiplicative inverse .
//x is the modular multiplicative inverse of A under modulo B
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
int modinverse(int a,int m)
{
    extendedeuclid(a,m);
    return (x%m + m) % m;// x may be negative.
    //return x;
}
int main()
{
    int a,m;
    cin >> a >> m;
    cout << modinverse(a,m);

}