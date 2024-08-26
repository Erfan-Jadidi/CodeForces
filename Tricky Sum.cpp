#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	ll a, n;
	ll ans=0;
	cin>>n;
	while(n--){
		ans=0;
		ll i=1;
		cin>>a;
		ans+=(a*(a+1)/2);
		while(i<=a){
			ans-=2*i;
			i*=2;
		}
		cout<<ans<<endl;;
	}
	
	return 0;
}
