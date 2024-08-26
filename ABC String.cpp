#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t;
	string s;
	cin >> t ;
	while( t-- )
	{
		cin >> s;
		bool mark [ s.length() ] = {0};
		if( s[0] == s[s.length()-1] )
		{
			cout << "NO" << endl;
		}
		else
		{
			int a=0 , b=0 , c=0 ;
			for( int i = 0 ; i < s.length() ; i++ )
			{
				if( s[i] == 'A' )
				{
					a++;
				}
				else if( s[i] == 'B' )
				{
					b++;
				}
				else
				{
					c++;
				}
			}
			if( s[0] == 'A' )
			{
				
			}
		}
	}

	return 0;
}
