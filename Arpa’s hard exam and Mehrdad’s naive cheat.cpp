#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	ll a, b=8;
	cin>>a;
	if(a==0){
		cout<<"1";
	}
	else{
		if(a%4==1)
		{
			cout<<"8";
		}
		else if(a%4==2){
			cout<<"4";
		}
		else if(a%4==3){
			cout<<"2";
		}
		else{
			cout<<"6";
		}
	}

	return 0;
}
