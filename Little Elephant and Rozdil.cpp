#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

bool myComp(pair<int, int> &a, pair<int, int> &b)
{
	return a.second < b.second ;
}

int main(){
	flash;
	int n;
	cin >> n;
	pair<int , int> a[n];
	for(int i=0;i<n;i++)
	{
		a[i].first = i+1;
		cin >> a[i].second ;
	}
	sort(a, a+n, myComp);
//	for(int i =0;i<n;i++)
//	{
//		cout << a[i].first << " " << a[i].second << endl;
//	}
	if(a[0].second == a[1].second)
	{
		cout << "Still Rozdil";
	}
	else
	{
		cout << a[0].first;
	}

	return 0;
}
