#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, temp=10000;
	cin>>a>>b;
	int c[b], ans=0;
	for(int i=0;i<b;i++){
		cin>>c[i];
	}
	sort(c, c+b);
//	for(int i=0;i<b;i++){
//		cout<<c[i]<<" ";
//	}
//	cout<<endl;
	for(int i=b-1;i>=a-1;i--){
		ans=c[i]-c[i-(a-1)];
		if(temp>ans) temp=ans;
	}
	cout<<temp;
}