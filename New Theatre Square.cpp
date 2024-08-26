#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, a, b, x, y, counter = 0, one = 0, two = 0;
	cin >> t;
	while(t--)
	{
		one = 0;two = 0;
		cin >> a >> b >> x >> y;
		char star[a][b+1];
		for(int  i = 0 ;i < a ; i++)
		{
			for(int j = 0 ; j < b ; j++)
			{
				cin >> star[i][j];
			}
			star[i][b] = '*';
		}
		counter = 0;
		for(int  i = 0 ;i < a ; i++)
		{
			for(int j = 0 ; j < b ; j++)
			{
				if(star[i][j] == '.')
				{
					counter++;
					if(star[i][j] == star[i][j+1])
					{
						two++;
						counter++;
						j++;
					}
				}
			}
		}
		one += (counter - (2*two));
//		cout << two << ": " << one << endl;
		if((2*x) < y)
		{
			cout << x*(counter) << endl;
		}
		else
		{
			cout << two*y + one*x << endl;
		}
	}

	return 0;
}
