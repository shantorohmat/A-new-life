#include <iostream>
#include <set>
using namespace std;
#define endl "\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
typedef set<ll> sets;
const int N = 1e6+7;
const int mod = 1e9+7;
ll phi[N];
ll ans[N];
void phi_1_n()
{
    for(int i = 0;i <= N;i++)
    {
        phi[i] = i;
    }

    for(int i = 2;i <= N;i++)
    {
        if(phi[i] == i)
        {
            for(int j = i;j <= N;j+=i)
            {
                phi[j] = phi[j]/i;
                phi[j] = phi[j] * (i-1);
            }
        }
    }
}
void divisor()
{
    for(int i = 1;i <= N;i++)
    {
        for(int j = i;j <= N;j += i)
        {
            ans[j] += phi[i] * i;
        }
    }
}
int main()
{
    fastIO;
    phi_1_n();
    divisor();
    ll t;
    cin >> t;
    ll n;
    while(t--)
    {
        ll lcm = 0;
        cin >> n;
        lcm = ans[n] + 1;
        lcm = (lcm * n)/2;
        cout << lcm << endl;
        
    }
}