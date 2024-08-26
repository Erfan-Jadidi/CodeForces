#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t;
	cin>>t;
	while(t--){
		int n;
		bool x=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n-1;i++){
			if(a[i]>a[i-1] && a[i]>a[i+1])
			{
				cout<<"YES"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				x=1;break;
			}
		}
		if(x==0){
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
