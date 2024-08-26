#include<iostream>
using namespace std;
int main(){
	int a, c, d=0, e=0;
	cin>>a>>c;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	d=b[c-1];
	for(int i=0;i<a;i++){
		if( b[i]>=d && b[i]>0 ){
			e++;
		}
	}
	cout<<e;
}