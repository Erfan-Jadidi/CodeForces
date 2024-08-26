#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int b[n], ans=0;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=n-2;i>=0;i--){
			if(b[i+1]<=b[i]){
				while(b[i+1]<=b[i] && b[i+1]!=0){
					b[i]/=2;
					ans++;
				}
				if(b[i+1]==0){
					ans=-1;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
