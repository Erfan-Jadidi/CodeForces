#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, b, ans=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		if(b%i==0 && (b/i)<=a){
			ans++;
		}
	}
	cout<<ans;

	return 0;
}
