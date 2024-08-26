#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int temp=0, ans=0, count=0;
	int b[5], c[120]={0};
	for(int i=0;i<5;i++){
		cin>>b[i];
		c[b[i]]++;
		count+=b[i];
	}
	for(int i=0;i<120;i++){
		temp=0;
		if(c[i]>=2){
//			cout<<i<<"-->"<<c[i]<<endl;
			temp=2*i;
		}
		if(ans<temp){
			ans=temp;
		}
	}
	cout<<count-ans;
	return 0;
}
