#include <iostream>
using namespace std;
int m;
int modinverse(int n,int r)
{
    int res = 1;
    while(r)
    {
        if(r%2)
        {
            res = (res * n)%m;
            r--;
        }
        else {
            n = (n * n)%m;
            r /= 2;
        }
        
    }
    return res;
}
int main()
{
    int a;
    cin >> a >> m;
    cout << modinverse(a,m-2);// a^(m-2)
    //fermat's little theorem a^(m-1) = 1 (mod m)
    //                        a^(m-2) = a^(-1) (mod m)
}