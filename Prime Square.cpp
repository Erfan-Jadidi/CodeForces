#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, a;
	cin >> t;
	while(t--)
	{
		cin >> a;
		int mat[a][a] = {0};
		for(int i = 0; i < a ; i++)
		{
			for(int j = 0 ; j < a; j++)
			{
				mat[i][j] = 0;
			}
		}
		for(int i = 0 ; i < a ; i++)
		{
			mat[i][i] = 1;
			mat[i][a-i-1] = 1;
		}
		if(a % 2)
		{
			mat[a/2-1][a/2] = 1;
			mat[a/2][a/2+1] = 1;
		}
		for(int i =0;i < a; i++)
		{
			for(int  j =0 ;j < a ; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
