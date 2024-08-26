#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"


int main(){
	flash;
	int n, i = 0, counter=0, maxim=0;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for(int i = 0 ;i < (2*n) ; i++)
	{
		if(a[i%n] == 1)
		{
			counter++;
			maxim = max(counter, maxim);
		}
		else
		{
			counter = 0;
		}
	}
	cout << maxim ;

	return 0;
}
