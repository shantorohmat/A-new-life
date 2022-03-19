#include <iostream>
using namespace std;
int main()
{
   
    int n;
    cin >> n;
    int arr[n+7];
    for(int i = 0;i <= n;i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
       
        int l,r;
        cin >> l >> r;

        int cnt[n+1] = {0};
        int ans = 0;

        for(int i = l;i <= r;i++)
        {
            cnt[arr[i]]++; 

            if(cnt[arr[i]] == 2)
                ans++;  
        }
        
        cout << ans << endl;
    }
    

}