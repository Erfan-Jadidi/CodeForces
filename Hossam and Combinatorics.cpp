#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	ll t, count1 = 0, count2 = 0, n;
	cin >> t;
	while(t--)
	{
		count1 = 0;count2 = 0;
		cin >> n;
		int a[n];
		for(int i = 0 ;i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0 ;i < n ; i++)
		{
			if(a[i] == a[0]) count1++;
			else if(a[i] == a[n-1]) count2++;
		}
		if(count1 == n)
		{
			cout << n*(n-1) << endl;
		}
		else
		{
			cout << count1 * count2 * 2 << endl;
		}
	}

	return 0;
}
