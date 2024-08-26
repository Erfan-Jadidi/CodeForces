#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int q, type, cost, pt = 0;
	vector<int> v;
	cin >> q;
	while(q--)
	{
		cin >> type;
		if(type == 1)
		{
			cin >> cost;
			v.push_back(cost);
		}
		else if(type == 2)
		{
			for(int  i = pt ; i <v.size() ; i++)
			{
				if(v[i] != 0)
				{
					cout << i+1 << " ";
					v[i] = 0;
					pt = i;
					break;
				}
			}
		}
		else
		{
			int max = v.size()-1;
			for(int i = v.size()-1 ; i >= 0  ; i--)
			{
				if(v[i] >= v[max])
				{
					max = i;
				}
			}
			cout << max+1 << " ";
			v[max] = 0;
		}
	}

	return 0;
}
