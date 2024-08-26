#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, b;
	cin>>a;
	while(a--){
		cin>>b;
		long long int c[b], ans=0;
		for(int i=0;i<b;i++){
			cin>>c[i];
		}
		for(int i=0;i<b;i++){
			for(int j=i+1;j<b;j++){
				if(c[j]<c[i]){
					ans++;
				}
			}
		}
		if((b*(b-1))/2-1<ans){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
