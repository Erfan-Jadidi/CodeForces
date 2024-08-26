#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int n, max=0;
	cin>>n;
	int b[n], a[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	a[0]=b[0];
	max=a[0];
	a[1]=b[1]+a[0];
	if(a[1]>max){
		max=a[1];
	}
	for(int i=2;i<n;i++){
		a[i]=b[i]+max;
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
