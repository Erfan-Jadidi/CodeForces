#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=1e9+10;

int main(){
	flash;
	int n;
	cin>>n;
	int a[n], ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res[maxn];
	for(int i=0;i<n;i++){
		res[a[i]]++;
	}
	for(int i=0;i<=maxn;i++){
		if(res[i]>0){
			ans++;
		}
	}
	cout<<ans;

	return 0;
}
