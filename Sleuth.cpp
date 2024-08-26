#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	string a;
	cin>>a;
	for(int i=a.length()-1;i>=0;i--){
		if((int(a[i])>=65 and int(a[i])<=90) or (int(a[i])>=97 and int(a[i])<=122)){
			cout<<a[i];
			if((a[i]=='a' or a[i]=='A') or (a[i]=='e' or a[i]=='E') or (a[i]=='i' or a[i]=='I') or (a[i]=='o' or a[i]=='O') or (a[i]=='u' or a[i]=='U') or (a[i]=='y' or a[i]=='Y')){
				cout<<"Yes";
			}
			else{
				cout<<"No";
			}
			return 0;
		}
	}

	return 0;
}
