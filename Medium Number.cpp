#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b[3];
	cin>>a;
	int c[a];
	for(int i=0;i<a;i++){
		for(int j=0;j<3;j++){
			cin>>b[j];
		}
		sort(b, b+3);
		c[i]=b[1];
	}
	for(int i=0;i<a;i++){
		cout<<c[i]<<endl;
	}
}