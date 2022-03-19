#include <iostream>
#include <set>
using namespace std;
const int N = 1e6;
int primefactor(int n)
{
    //O(sqrt(n))
    
    int ans = n;
    for(int i = 2;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            ans = ans/ i; // i = prime
            ans = ans * (i-1);

            while(n%i == 0)
            {
               
                n = n / i;

            }
        }
        
    }
    if(n>1)
    {
        ans = ans/n;
        ans = ans * (n - 1);
    }
    return ans;
}
int main()
{
    //time complexity O(sqrt(n))
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int res = primefactor(n);
        cout << res << endl;
        
    }
}