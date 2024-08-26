#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

void solve(int n)
{
	for(int i = 1 ; i <= n+1; i++)
	{
		for(int j = 0 ; j <= (n-i) ; j++)
		{
			cout << "  " ;
		}
		for(int j = 0 ; j < i ; j++)
		{
			cout << j % (i+1) << " ";
		}
		cout << endl;
	}
}

int main(){
	flash;
	int n;
	cin >> n;
	solve(n);

	return 0;
}
