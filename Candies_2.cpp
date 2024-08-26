#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, temp=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		for(int j=2;true;j++){
			temp=pow(2, j)-1;
			if(b % temp==0 && b>=temp){
				cout<<b/temp<<endl;
				break;
			}
		}
	}
}