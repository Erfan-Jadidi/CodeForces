#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

int main(){
	flash;
	int t, n, m, a, b, x, y;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		int inp[n + 1] = {0};
		for(int i = 0 ; i < m ; i++)
		{
			cin >> a >> b;
			inp[a]++;inp[b]++;
		}
		map<int, int> mp;
		for(int i = 1 ; i < n + 1 ; i++)
		{
			if(mp.find(inp[i]) == mp.end())
			{
				if(inp[i] != 1) mp.insert({inp[i], 1});
			}
			else
			{
				mp[inp[i]]++;
			}
		}
//		for(auto i : mp)
//		{
//			cout << i.first << "->" << i.second << endl;
//		}
		int a1 = mp.begin() -> second;
		auto it = next(mp.begin(), 1);
		int a2 = it -> second;
		if(a1 > a2)
		{
			cout << it -> first << " " << mp.begin() -> first - 1 << endl;
		}
		else
		{
			cout << mp.begin() -> first << " " << it -> first - 1 << endl;
		}
//		cout << "-------------" << endl;
////		for(int i = 0 ; i < n + 1 ; i++) cout << i << " : " << inp[i] << endl;
	}
	return 0;
}