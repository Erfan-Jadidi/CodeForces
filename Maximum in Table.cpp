#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b[a][a];
	for(int i=0;i<a;i++){
		b[0][i]=1;
		b[i][0]=1;
	}
	for(int i=1;i<a;i++){
		for(int j=1;j<a;j++){
			b[i][j]=b[i-1][j]+b[i][j-1];
		}
	}
	cout<<b[a-1][a-1];
}