#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, b, c, d, x, y, ans=0;
	cin>>a>>b>>c>>d;
	x=abs(a-c);
	y=abs(b-d);
	ans+=min(x, y);
	ans+=abs(x-y);
	cout<<ans;
	
}
