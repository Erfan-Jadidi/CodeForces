#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int binary(int a);
string s;
int main(){
	migmig;
	long long int a, ans=0;
	cin>>a;
	while(a>0){
		a-=binary(a);
		ans++;
	}
	cout<<ans;

	return 0;
}
int binary(int a){
	int ans=0;
	for(int i=0;true;i++){
		if(pow(2, i)<=a and pow(2, i+1)>a){
			ans=pow(2, i);
			break;
		}
	}
	return ans;
}