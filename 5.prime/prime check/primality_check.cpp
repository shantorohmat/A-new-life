#include <iostream>
using namespace std;
int primality_check(int n)
//O(n)
{
    for(int i = 2;i * i <= n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << primality_check(n) << endl;

    }
}