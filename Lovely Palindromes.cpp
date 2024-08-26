#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	string n, s;
	cin >> n;
	s = n;
	reverse(n.begin(), n.end());
	cout << s << n;

	return 0;
}
