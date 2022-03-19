#include <iostream>
using namespace std;
#define endl "\n";
#define fastIO ios_base:sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
const int N = 1e6+7;
const int mod = 1e9+7;
int gcd_1(int a,int b)
{
    if(b == 0)
    return a;
    else
    return gcd_1(b,a%b);
}

int main()
{
    ll t;
    cin >> t;
    ll a,b;
    while(t--)
    {
        cin >> a ;
        ll lcm = 0;
        for(int b = 1; b <= a;b++)
        {
            ll x = a * b;
            lcm += x/gcd_1(a,b);
        }
        cout << lcm << endl;


    }
}