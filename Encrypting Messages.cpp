#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

int main(){
	flash;
	int m, n, c, pt = 0, save;
	cin >> m >> n >> c;
	vector<int> ans[m], res[n];
	
	for(int i = 0 ; i < m ; i++) 
		cin >> save;
		ans.push_back(save);
	for(int i = 0 ; i < n ; i++)
		cin >> save;
		res.push_back(save);
	
	for(int i = 0 ; i < (m - n + 1) ; i++)
	{
		pt = i;
		for(int j = 0 ; j < n ; j++)
		{
			if(pt == m) pt = 0;
			ans[pt] += res[j];
			if(ans[pt] >= c) ans[pt] -= c;
			pt++;
		}
	}
	for(auto itm : ans) cout << itm << " ";
	

	return 0;
}
