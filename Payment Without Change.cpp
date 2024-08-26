#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, a, b, n , s;
	cin >> t;
	while(t--)
	{
		bool x = 0;
		cin >> a >> b >> n >> s;
		if(b == s)
		{
			cout << "YES" << endl;
		}
		else if(s % n == 0 && (s/n) <= a)
		{
			cout << "YES" << endl;
		}
		else
		{
			for(int i = 1 ; i <= b ; i++){
				if((s-i) % n == 0)
				{
					if((s-i)/n <= a)
					{
						cout << "YES" << endl;x = 1;
						break;
					}
				}
			}
			if(x == 0)
			{
				cout << "NO" <<endl;
			}
		}
	}

	return 0;
}
