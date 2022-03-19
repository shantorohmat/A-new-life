#include <iostream>
using namespace std;
#define ll long long int 
const ll mod = 1e9+7;
int main()
{
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;

    cout << ((((n%mod) * (2*n%mod-1))%mod)%mod) << endl;
    }
}