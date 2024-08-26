#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, counter=0, n;
	int cnt=0, ans=0;
	cin>>n;
	while(n--){
		cin>>a;
		int b[a];counter=0;cnt=0;ans=0;
		for(int i=0;i<a;i++){
			cin>>b[i];
			if(b[i]==(i+1)){
				counter++;
			}
		}
		if(counter==a){
			cout<<"0";
		}
		else{
			if(b[0]==1 or b[a-1]==a){
				cout<<"1";
			}
			else if(b[0]==a and b[a-1]==1){
				cout<<"3";
			}
			else{
				cout<<"2";
			}
		}
		cout<<endl;
	}
	

	return 0;
}
