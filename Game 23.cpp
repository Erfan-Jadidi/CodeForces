#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int a, b, temp, counter = 0;
	cin >> a >> b ;
	if(b % a == 0)
	{
		temp = b/a;
		while(temp > 1)
		{
			if(temp % 2 == 0)
			{
				temp/=2;
				counter++;
			}
			else if(temp % 3 == 0)
			{
				temp/=3;
				counter++;
			}
			else
			{
				cout << "-1";
				return 0;
			}
		}
		cout << counter ;
	}
	else{
		cout << "-1" ;
	}

	return 0;
}
