#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, d=0, temp=0, e=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	sort(b, b+a);
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>e;
		for(int j=0;j<a;j++){
			if(e<b[j]){
				temp=j;
				break;
			}	
		}
		if(e==b[a-1]){
			temp=a;
		}
		cout<<temp<<endl;
		temp=0;
	}
}