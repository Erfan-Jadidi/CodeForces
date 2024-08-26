#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

int main(){
	flash;
	int t, ans = 0, max = 0, size = 0;
	cin >> t;
	string s;
	while(t--)
	{
		cin >> size;max = 0;
		int a[size];
		for(int i = 0 ; i < size ; i++) 
			cin >> a[i];
		for(int i = 0 ; i < size ; i++)
		{
			if(a[i] == 0)
			{
				ans = 1;
				for(int j = i + 1 ; j < size ; j++)
				{
					if(a[j] == 0) ans++;
					else break;
				}
				if(max < ans)
				{
					max = ans;
				}
			}
		}
		cout << max << endl;
	}

	return 0;
}
