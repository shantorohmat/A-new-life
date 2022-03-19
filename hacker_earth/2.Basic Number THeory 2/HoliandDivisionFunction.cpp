#include <iostream>
using namespace std;
// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/holi-and-division-function-1dfc3294/

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double *a = new double [n];
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++) 
        { 
            for(int j=0;j<n;j++) 
            { 
                double k = a[i]/a[j];
                int k1 = k;
                double d = k - k1;
                if(d >= 0.5)
                {
                    k = k1 + 1;
                }
                else k = k1;
                ans = ans + k;
                

                //ans=ans+F(a[i]/a[j]);
            } 
        } 
        cout << ans << endl;
    }
}


