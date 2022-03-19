#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
const ll N = 1e6;
const ll mod = 1e9+7;

int main()
{

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        ll ans = 0;
        cin >> n;
        // for(ll i=5;n/i>0;i*=5)

        // {

        //     ans+=n/i;

        // }
        while (n > 0)
        {
            ans += n / 5;
            n /= 5;

        }

        cout<<ans<<endl;

    }
    
}