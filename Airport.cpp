#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int pass, tick, max(0), min(0);
	cin >> pass >> tick;
	int ticket[tick];
	
	for(int  i = 0 ; i < tick ; i++)
	{
		cin >> ticket[i];
	}
	
	sort(ticket, ticket+tick);//assending
	int num(ticket[0]), k(0);
	
	for(int  i = 0 ; i < pass ; i++)//min and assen
	{
		min += num;
		num -= 1;
		if(num == 0)
		{
			num = ticket[++k];
		}
	}
	
//	cout << max << " " << min << endl;

	sort(ticket, ticket+tick, greater<int>());//desending
	
	while(pass--)
	{
		max += ticket[0];
		ticket[0] -= 1;
		for(int  i = 1 ; i < tick ; i++)
		{
			if(ticket[i] <= ticket[i-1])
			{
				break;
			}
			swap(ticket[i], ticket[i-1]);
		}
	}
	
	cout << max << " " << min ;

	return 0;
}
