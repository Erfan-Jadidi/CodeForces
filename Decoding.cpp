#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, s=0, e=0;
	cin>>a;
	string b;
	cin>>b;
	char c[b.length()];
	e=b.length()-1;
	bool x=1;
	for(int i=b.length()-1;i>=0;i--){
		if(x){
			c[e]=b[i];
			x=0;e--;
		}
		else{
			c[s]=b[i];
			x=1;s++;
		}
	}
	for(int i=0;i<b.length();i++){
		cout<<c[i];
	}

	return 0;
}
