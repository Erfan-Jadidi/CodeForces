#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, a, l, r;
	cin >> t ;
	while(t--)
	{
		cin >> a ;
		cout << a/2 + a%2 << endl;
		l = 1;
		r = 3*a;
		while(l < r)
		{
			cout << l << " " << r << endl ;
			l+=3;r-=3;
		}
		
	}

	return 0;
}
