#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int q, pt = 1, num, cost;
	vector<int> v;
	
	set<pair<int, int>> moni, poly;
	
	
	cin >> q;
	
	
	while(q--)
	{
		cin >> num;
		if(num == 1)
		{
			cin >> cost;
			moni.insert({pt, cost});
			poly.insert({cost, pt});
			pt++;
		}
		else if(num == 2)
		{
			auto pointer = moni.begin();
			v.push_back(pointer->first);
			
			poly.erase({pointer->second, pointer->first});
			moni.erase(pointer);
		}
		else
		{
			auto ptr = --poly.end();
			auto p = poly.lower_bound({ptr->first, -1});
			
			v.push_back(p->second);
			moni.erase({p->second, p->first});
			poly.erase(p);
		}
	}
	for(auto itm : v)
	{
		cout << itm << " ";
	}
	return 0;
}
