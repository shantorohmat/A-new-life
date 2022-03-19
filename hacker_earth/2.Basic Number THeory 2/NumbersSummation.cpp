#include <iostream>
#include <algorithm>
using namespace std;
int sum = 0;
void factor(int n,int m)
{
    int k = max(n,m);
    for(int i = 1;i <= k;i++)
    {
        if(n%i == 0 && m%i == 0)
       {
           sum += i;
           
       }
       
            
        
    }
    // if(n != 1)
    // sum = sum + n;
    // sum = sum + 1;
    
}

int main()
{
    int n;
    cin >>n;
    while(n--)
    {
        int t;
        cin >> t;
        for(int i = 1;i <= n;i++)
        {
            for(int j = i;j <= n;j++)
            {
                int k = min(i,j);
                factor(i,j);
            }
        }
        cout << sum << endl;
    }
}