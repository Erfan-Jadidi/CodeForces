#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	float ans=0.0f;
	cin>>a>>b;
	int c[a];
	float d[a+1];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	sort(c, c+a);
	d[0]=c[0];
	d[a]=b-c[a-1];
	for(int i=1;i<a;i++){
		d[i]=(c[i]-c[i-1])/2;
	}
//	sort(d, d+a+1);
	for(int i=0;i<a;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<a+1;i++){
		cout<<d[i]<<" ";
	}
	ans+=d[a];
	cout<<endl;
	cout<<ans;
}