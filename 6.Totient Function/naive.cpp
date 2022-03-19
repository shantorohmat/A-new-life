#include <iostream>
using namespace std;
int _gcd(int a,int b)
{
    if(b == 0)
        return a;
    return _gcd(b,a%b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n,cnt = 0;
       cin >> n;
       for(int i = 1;i <= n;i++)
       {
           if(_gcd(n,i) == 1)
           { 
               cnt++;
           }
       }
       cout << cnt << endl;
    }
}