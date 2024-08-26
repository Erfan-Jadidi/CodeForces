#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, b, p_1=0, p_2=0, count=0;
	cin>>a>>b;
	int c[a], d[b];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	for(int i=0;i<b;i++){
		cin>>d[i];
	}
	while(p_1!=a and p_2!=b){
		if(c[p_1]<=d[p_2]){
			count++;
			p_1++;p_2++;
		}
		else{
			p_1++;
		}
	}
	cout<<count;

	return 0;
}
