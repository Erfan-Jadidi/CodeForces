#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t;
	cin >> t;
	string str;
	map<string, int> map;
	while(t--)
	{
		cin >> str;
		if(map.find(str) == map.end())
		{
			map.insert({str, 0});
			cout << "OK" << endl;
		}
		else
		{
			map[str]++;
			cout << str << map[str] << endl;
		}
	}

	return 0;
}
