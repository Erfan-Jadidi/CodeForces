#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

int main(){
	flash;
	int t;
	cin >> t;
	string m = "codeforces", s;
	while(t--)
	{
		cin >> s;
		int ans = 0;
		for(int i = 0 ; i < 10 ; i++)
		{
			if(s[i] != m[i]) ans++;
		}
		cout << ans << endl;
	}

	return 0;
}
