#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	string s, f;
	cin >> s >> f;
	if(s.length() == f.length())
	{
		if(s == f)
		{
			cout << "-1" ;
		}
		else
		{
			cout << s.length() ;
		}
	}
	else
	{
		cout << max(s.length(), f.length());
	}

	return 0;
}
