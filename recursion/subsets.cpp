/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad(vector<ll>v, ll k, ll n,vector<ll>ans)
{
    if(k==n)
    {
        for(ll i=0;i<ans.size();i++)
        {
          cout<<ans[i]<<" "; 
        }
        cout<<endl;
    }
    ans.push_back(v[k]);
    prasad(v,k+1,n,ans);
    ans.pop_back();
    prasad(v,k+1,n,ans);
    
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
        vector<ll>v={1,2,3,4,5,6};
        ll n=v.size();
        vector<ll>ans;
         prasad(v,0,n,ans);
          return 0;
}
