#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#define ll long long int
using namespace std;
// https://www.geeksforgeeks.org/maximum-sum-difference-adjacent-elements/
int main()
{
    ll t,k;
    cin >> t;
    while(t--)
    {
        ll res = 0;
        ll n;
        cin >> n;

        ll ans = floor((pow(n,2)/2) - 1);
        // ll and = (n * (n - 1) / 2) - 1 + n / 2;
        if(ans < 0) ans = -1 * ans;
        cout << ans << endl;
           


    }
}