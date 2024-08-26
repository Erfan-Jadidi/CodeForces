#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	string s, t;
	cin >> s >> t;
	int p_1 = s.length()-1, p_2 = t.length()-1, count=0;
	int sum = p_1 + p_2 +2;
	while( s[p_1] == t[p_2] && ( p_1 >= 0 && p_2 >= 0))
	{
		count++;
		p_1--;
		p_2--;
	}
	
//	cout << count << endl;
	cout << sum - (count * 2);

	return 0;
}
