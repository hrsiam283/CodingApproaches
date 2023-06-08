#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define inf (1LL<<60)
#define nl endl
#define maxi 1000009
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void init_code(){
    // fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
ll l,r;
void solve(ll l,ll r)
{
   int max_size = 0;
   int tempr = r;
   int ans = 0;
   int temp  = 0;
   while(l<=r)
   {
   	max_size++;
   	 temp  = r;
   	 r/=2;
   }

   ans  += (temp-l+1);
   for(int i=1;i<max_size;i++)
   {
   	 if(i==1) tempr/=3;
   	 else tempr/=2;
   }
  
   if(tempr>=l)
   {
   	 ans += (tempr-l+1)*(max_size-1);
   }
   cout<<max_size<<' '<<ans<<endl;
}
int main() {

   init_code();
   ll t;
   cin>>t;
   while(t--)
   {
 	 cin>>l>>r;
   	 solve(l,r);
   }

}