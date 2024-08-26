#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin>>a;
	while(a--){
		cin>>b>>c;
		int d[b], min=0, ans=0;
		for(int i=0;i<b;i++){
			cin>>d[i];
		}
		sort(d, d+b);
		min=d[0];
		for(int i=1;i<b;i++){
			ans+=((c-d[i])/min);
		}
		cout<<ans<<endl;
	}
}