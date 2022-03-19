#include <iostream>
#include <cmath>
using namespace  std;
#define ll long long int
const int mod = 1e9+7;
//// Time complexity O(sqrt(n))
void primefactor(ll n)
{
    //O(sqrt(N))

    for(int i = 2;i * i <= n;i++)
    {
       
            while(n%i == 0)
            {
                n = n/i;
                
            }
            cout << i << " ";
        
    }
    if(n != 1)
    cout << n << endl;
}
//100 = 
// 2 X 50
// 2 X 25
// 5 X 5
// 5 X 1
int main()
{
    ll n;
    cin >> n;
    primefactor(n);
}

