#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	
	int n, counter = 0, even = 0, odd = 0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i] % 2 == 0)
		{
			even++;
		}
		else odd++;
	}
	if(odd % 2 == 1)
	{
		cout << odd ;
	}
	else
	{
		cout << even ;
	}
	

	return 0;
}
