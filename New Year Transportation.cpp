#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, c, i=0;
	cin >>a>>c;
	int b[a];
	for(int i=0;i<a-1;i++){
		cin>>b[i];
	}
	while(i<=a-1){
		if(i+1>c){
			cout<<"NO";
			break;
		}
		else if(i+1==c){
			cout<<"YES";
			break;
		}
		i+=b[i];
	}
	return 0;
}
