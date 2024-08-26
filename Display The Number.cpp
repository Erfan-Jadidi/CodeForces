#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int t, a;
	cin>>t;
	while(t--){
		cin>>a;
		if(a%2==0){
			for(int i=0;i<a/2;i++){
				cout<<"1";
			}
			cout<<endl;
		}
		else{
			cout<<"7";
			a-=3;
			for(int i=0;i<a/2;i++){
				cout<<"1";
			}
			cout<<endl;
		}
	}

	return 0;
}
