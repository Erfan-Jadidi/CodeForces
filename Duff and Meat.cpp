#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, min=100, ans=0, b, c;
	cin>>a;
	while(a--){
		cin>>b>>c;
		if(min>c){
			min=c;
		}
		ans+=(min*b);
	}
	cout<<ans;

	return 0;
}
