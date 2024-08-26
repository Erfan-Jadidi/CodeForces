#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, counter, mat ;
	int a, b, c, d;
	cin >> t ;
	while( t-- )
	{
		bool x = 0 ;
		cin >> counter >> mat ;
		if( mat % 2 == 0)
		{
			while( counter-- )
			{
				cin >> a >> b >> c >> d;
				if( b == c)
				{
					x = 1;
				}
			}
			if( x )
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		else
		{
			while( counter-- )
			{
				cin >> a >> b >> c >> d;
			}
			cout << "NO" << endl ;
		}
	}

	return 0;
}
