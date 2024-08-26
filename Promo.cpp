#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, b, x, y;
	cin>>a>>b;
	int c[a];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	sort(c, c+a);
	while(b--){
		int ans=0;
		cin>>x>>y;
		if(x==y){
			x++;
		}
		for(int i=a-x;i<(a-x)+y;i++){
			ans+=c[i];
		}
		cout<<ans<<endl;
	}

	return 0;
}
