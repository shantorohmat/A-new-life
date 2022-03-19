#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,y,k = 0;

    for(int i = 1;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            x = i;
            y = n/i;
            if((x+y)%2 == 0)
            k++;
        }
    }
    cout <<k << endl;
}