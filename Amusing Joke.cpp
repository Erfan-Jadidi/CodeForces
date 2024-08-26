#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	string s_1, s_2, res;
	cin>>s_1>>s_2>>res;
	s_1+=s_2;
	sort(s_1.begin(), s_1.end());
	sort(res.begin(), res.end());
	if(res==s_1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

	return 0;
}
