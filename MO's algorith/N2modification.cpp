#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
#define M 200010
#define N 30010
#define A 1000010
int anser[M] = {0};
int ans = 0;
int arr[N];
int cnt[A] ;

int BLOCK  = 174;
struct query
{
    int l,r,ind;
}Q[M];

void add(int pos)
{
    cnt[arr[pos]]++;
    if(cnt[arr[pos]] == 1)
    ans++;
}
void remove(int pos)
{
    cnt[arr[pos]]--;
    if(cnt[arr[pos]] == 0)
    ans--;
}
bool cmp(query f,query s)
{
    if((f.l/BLOCK)!=(s.l/BLOCK))
        return (f.l/BLOCK)<(s.l/BLOCK);
    else
        return f.r<s.r;
}

int main()
{  
    //O(sqrt(n) * n)

    ios_base::sync_with_stdio(false);
     
    int n;
    cin >> n;
    
    
    // for(int i = 0;i < n;i++)
    // {
        cin >> arr[i];
    }
    //cout << "query : " << endl;
    int q;
    cin >> q;
    for(int i = 0;i < q;i++)
    {
        //scanf("%d%d",&Q[i].l,&Q[i].r);
        cin >> Q[i].l >> Q[i].r;
        Q[i].ind=i;
        Q[i].l--;
        Q[i].r--;
    }
    sort(Q,Q+q,cmp);
    int currentL = 0,currentR = 0;

    for(int i = 0;i < q;i++)
    {
        
        
        int l = Q[i].l;
        int r = Q[i].r;
       
        
        // 1 2 1 5 4 7
        // 0 1 2 3 4 5
        // l = 2 ; r = 4
        while(currentL < l)
        {
            remove(currentL);
            currentL++;
        }
        while(currentL > l)
        {
            add(currentL-1);
            currentL--;
        }
        while(currentR <= r)
        {
            add(currentR);
            currentR++;
        }
        while(currentR > r+1)
        {
            remove(currentR-1);
            currentR--;
        }
        anser[Q[i].ind] = ans;

        
    }
    for(int i = 0;i < q;i++)
    {
        cout << anser[i] << endl;
    }
    //cout << ans << endl;
    return 0;
}
