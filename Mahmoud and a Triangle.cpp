#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int n, check = 0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=0;i<n-2;i++)
	{
		check = 0;
		if(a[i] + a[i+1] > a[i+2]) check++;
		if(a[i] + a[i+2] > a[i+1]) check++;
		if(a[i+1] + a[i+2] > a[i]) check++;
		if(check == 3)
		{
			cout << "YES" ;
			return 0;
		}
	}
	cout << "NO" ;

	return 0;
}
