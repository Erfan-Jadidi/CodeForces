#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int n, a;
	string s, temp;
	cin>>n;
	while(n--){
		int ans=0;
		cin>>a>>s;
		temp=s;
		sort(s.begin(), s.end());
		for(int i=0;i<s.length();i++){
			if(s[i]!=temp[i]){
				ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
