#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define debug cout << "!!!" ;

int main(){
	flash;
	int t, size, q, a, b, ptr = 0;
	string s, cpy = "";
	bool check = 0;
	cin >> t;
	while(t--)
	{
		cin >> size >> q;
		cin >> s;
		while(q--)
		{
			ptr = 0;check = 0;cpy = "";
			cin >> a >> b;
			cpy = s.substr(a - 1, b - a + 1);
			cout << "string is : " << cpy << endl;
			for(int i = 0 ; i < size ; i++)
			{
				if(s[i] == cpy[ptr])
				{
					ptr++;
					for(int j = i + 2 ; j < size ; j++)
					{
						if(ptr == ((b - a) + 1))
						{
//							cout << j;
							check = 1;
							break;
						}
						if(s[j] == cpy[ptr])
						{
							ptr++;
							cout << j << " ";
						} 
					}
					break;
				}
			}
			if(check)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}
