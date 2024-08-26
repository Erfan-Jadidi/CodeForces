#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, ans=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	sort(b, b+a);
	for(int i=1;i<a-1;i++){
		if(b[i]==b[0] and b[i]==b[a-1]){
			break;
		}
		else if(b[i]>b[0] and b[i]<b[a-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
