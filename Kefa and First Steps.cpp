#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, temp=0, ans=1;
	cin>>a;
	int b[a], c[a];
	for(int i=0;i<a;i++){
		c[i]=0;
	}
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	temp=b[0];
	for(int i=1;i<a;i++){
		if(b[i]>=temp){
			ans++;
			temp=b[i];
		}
		else{
			c[i-1]=ans;
			ans=1;
			temp=b[i];
		}
	}
	c[a-1]=ans;
//	for(int i=0;i<a;i++){
//		cout<<c[i]<<" ";
//	}
//	cout<<endl;
	sort(c, c+a);
	cout<<c[a-1];
}