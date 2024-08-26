#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

const int maxn = 1e7 + 1;
vector<pair<int, int>> dp(maxn);

int check(int a, int b)
{
	if(a == b)
	{
		return 1;
	}
	else if(a % 3 != 0)
	{
		return 0;
	}
	return check(a / 3, b) || check((2 * a) / 3, b);
}

int main(){
	flash;
	int t, a, b;
	cin >> t;
	
	while(t--)
	{
		cin >> a >> b;
		if(a == b) cout << "YES" << endl;
		else if(b > a) cout << "NO" << endl;
		else if(a % 3 != 0) cout << "NO" << endl;
		else
		{
			if(check(a, b))
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}
