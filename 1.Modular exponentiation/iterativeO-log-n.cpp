#include <iostream>
using namespace std;
const int mod = 1e7+7;
int iterative(int n,int r)
{
    int res = 1;
    while(r>0)
    {
        if(r%2)
        {
            res =(res * n) % mod;
            r--;
        }
        else {
            r /= 2;
            n = (n*n) % mod;
        }
    }
    return res;
}
int main()
{
    int n,r;
    cin >> n >> r;

    cout << iterative(n,r);
}