#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t ;
	cin >> t;
	while(t--)
	{
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if(a[0] == a[1])
		{
			if(a[1] == a[2])
			{
				cout << "0" << endl;
			}
			else
			{
				a[0]++;a[1]++;
				if(a[0] != a[2]){
					a[2]--;
					cout << abs(a[2] - a[1]) + abs(a[2] - a[0]) << endl ;
				} 
				else cout << "0" << endl;
			}
		}
		else if(a[1] == a[2])
		{
			a[1]--;a[2]--;
			if(a[1] != a[0])
			{
				a[0]++;
				cout << abs(a[2] - a[0]) + abs(a[1] - a[0]) << endl ;
			}
			else cout << "0" << endl;
		}
		else
		{
			a[0]++;
			a[2]--;
			cout << abs(a[2] - a[0]) + abs(a[1] - a[0]) + abs(a[2] - a[1]) << endl;
		}
	}
	

	return 0;
}
