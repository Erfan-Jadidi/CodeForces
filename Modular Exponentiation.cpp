#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	ll n, m, temp = 1;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		temp*=2;
		if(temp > m)
		{
			cout << m ;
			return 0;
		}
	}
	cout << m % temp;

	return 0;
}
