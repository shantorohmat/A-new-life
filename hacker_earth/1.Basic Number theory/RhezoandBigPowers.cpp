#include <iostream>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll sol(int a,int n)
{
    ll res = 1;
    while(n>0)
    {
        if(n%2 == 0)
        {
            a = (a%mod * a%mod)%mod;
            n = n/2;
            //n >> 1;
        }
        else if(n%2 == 1)
        {
            n = n -1;
            res = (res%mod * a%mod);
        }
    }
    return res;
}
int main()
{
    ll a;
    cin >> a ;
    string b;
    cin >> b;
    ll res = 0;
    for(int i = 0;i < b.size();i++)
    {
        res = (10 * res + b[i] - '0') % (mod -1);
    }
    cout << sol(a,res);
}