#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
void sol()
{
    int n;
    cin >> n;
    int a,g;
    for(int i = 0;i < n;i++)
    {
        cin >> a;
        if(i == 0) g = a;
        else g = gcd(g,a);
    }
    if(g == 1) cout << "FINITE" << endl;
    else cout << "INFINITE" << endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        sol();
    }
}