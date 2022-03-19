#include <iostream>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
bool prime(int n)
{
    if(n < 2) return false;
    for(int i = 2;i * i <= n;i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n != 1 && prime(n+1))
        cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}