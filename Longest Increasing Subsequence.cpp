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

int arr[maxi];
int dp[maxi];
int n,k;
int func(int idx){
	if(dp[idx]!=-1) return dp[idx];
	int ans = 1;
	for(int i=idx-1;i>=0;i--){
		if(arr[i]<arr[idx]){
		 	ans = max(ans,func(i)+1);
		}
	}
	return dp[idx]=ans;
}

int main() {

   init_code();
   memset(dp,-1,sizeof(dp));
   int n;cin>>n;for(int i=0;i<n;i++)cin>>arr[i];
   int ans =1 ;
   for(int i=0;i<n;i++) ans = max(ans,func(i));
   	cout<<ans<<endl;
}