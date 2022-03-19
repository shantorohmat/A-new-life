#include <iostream>
using namespace std;
void P_check(int n)
{
    int count = 0;
    for(int i = 1;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            if(i * i == n)
                count++;
            else 
                count += 2;
        }

    }
    if(count == 2)
        cout << n << " is a prime number." << endl;
    else 
        cout << n <<  " is not a prime number." << endl;
}
int main()
{
    // sqrt(n)
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;


    }
}