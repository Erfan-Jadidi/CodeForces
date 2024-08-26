#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	string a, c;
	long long int b=0, i=0, temp=0;
	cin>>a;
	c=a[0];
	if(stoi(c)==9){
		i=1;
	}
	for(i;i<a.length();i++){
		c=a[i];
		if(stoi(c)>4){
			b=a[i]-'0';
			b=9-b;
			a[i]=b+'0';
		}
	}
	for(int i=0;i<a.length();i++){
		cout<<a[i];
	}
	
	return 0;
}
