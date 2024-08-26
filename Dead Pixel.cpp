#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int n, b, c, d, e, a[4];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b>>c>>d>>e;
		a[0]=(b*(e));
		a[1]=c*(d);
		a[2]=b*(c-e-1);
		a[3]=c*(b-d-1);
		sort(a, a+4);
		cout<<a[3]<<endl;
	}
	return 0;
}
