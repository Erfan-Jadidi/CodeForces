#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, b, temp=1;
	cin >> a >> b;
	if(a==1 and b==10){
		cout<<"-1";
	}
	else{
		if(b==10){
			cout<<"1";
			for(int i=1;i<a;i++){
				cout<<"0";
			}
		}
		else{
			for(int i=0;i<a;i++){
				cout<<b;
			}
		}
	}
	
	
	return 0;
}
