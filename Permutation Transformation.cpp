#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int node[100], tmp[100];

void depth(int start, int end, int dep)
{
	if(start >= end)
	{
		return;
	}
	int max = start; 
	for(int i = start ; i < end ; i++)
	{
		if(node[i] > node[max])
		{
			max = i;
		}
	}
	tmp[max] = dep;
	dep++;
	depth(start, max, dep);
	depth(max+1, end, dep);
	return;
}

int main(){
	flash;
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0 ;i < n ;i++)
		{
			cin >> node[i];
		}
		depth(0, n, 0);
		for(int  i = 0 ; i < n ; i++)
		{
			cout << tmp[i] << " ";
		}
		cout << endl;
	}
	
	

	return 0;
}
