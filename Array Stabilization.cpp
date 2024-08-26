#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int n;
	cin >> n;
	int a[n];
	for(int  i =0 ;i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	if(n == 2)
	{
		cout << "0" ;
		return 0;
	}
	if(a[n-2] - a[0] > a[n-1] - a[1]){
		cout << a[n-1] - a[1];
	}
	else
	{
		cout << a[n-2] - a[0];
	}

	return 0;
}
