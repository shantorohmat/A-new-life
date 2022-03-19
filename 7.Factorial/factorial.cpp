#include <iostream>
using namespace std;
#define ll long long int
const ll N = 1e6;
const ll mod = 1e9+7;
ll f[N+7];
void fact()
{
    f[0] = 1;
    ll i = 1;
    while(i < N)
    {
        f[i] = f[i-1] * i;
        f[i] = f[i] % mod;
        i++;
    }
}
int main()
{
    fact();
    ll n;
    cin >> n;
    cout << f[n] << endl;
}