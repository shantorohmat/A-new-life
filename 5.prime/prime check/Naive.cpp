#include <iostream>
using namespace std;
void primecheck(int n)
{
    int count = 0;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }

    }
    if(count == 2)
        cout << n << " is a prime number." << endl;
    else 
        cout << n <<  " is not a prime number." << endl;
}
int main()
{
    //O(N)
    int n;
    cin >> n;
    primecheck(n);
}