#include <iostream>
#include <climits>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
    if(b == 0)
    return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    //a*b = lcm * gcd
    ll lcm = (a*b)/gcd(a,b);
    return lcm;
}
int main()
{
    ios_base::sync_with_stdio(0);

   cin.tie(0);

   cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
       
        ll  * a = new ll[n];

        for(int i = 0;i < n;i++)
        {
            cin>> a[i];

        }
        if(n == 1)
        {
            cout << a[0] << endl;
            
            return 0;
        }
        ll x = lcm(a[0],a[1]);
        
        for(int i = 2;i < n;i++)
        {
            x = lcm(x,a[i]);
            

        }
        cout << x << endl;


    }
}


