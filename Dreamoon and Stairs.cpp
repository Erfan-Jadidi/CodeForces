#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, b, temp=0, end=0;
	cin>>a>>b;
	if(a<b){
		cout<<"-1";
	}
	else if(a==b){
		cout<<a;
	}
	else{
		end=a;
		temp=a/2;
		temp+=a%2;
		while(end>=temp){
			if(temp%b==0){
				cout<<temp;
				return 0;
			}
			temp++;
		}
		cout<<"-1";
	}

	return 0;
}
