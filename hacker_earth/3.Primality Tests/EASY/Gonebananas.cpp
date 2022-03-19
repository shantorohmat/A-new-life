#include <iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool prime(int n)
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
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        

        if(prime(n))
        cout << "No" << endl;
        else cout << "Yes" << endl;
    }

}