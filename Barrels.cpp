#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, temp=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;temp=0;
		int d[c];
		for(int j=0;j<b;j++){
			cin>>d[j];
		}
		sort(d, d+c);
		for(int j=1;j<=c+1;j++){
			temp+=d[b-j];
		}
//		cout<<endl;
		cout<<temp<<endl;
	}
}