#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a, b, count=0;
	cin>>a;
	bool x=1;
	for(int i=0;i<a;i++){
		cin>>b;count=0;
		while(b!=1){
			if(b%6==0){
				b/=6;count++;
			}
			else if(b%3==0){
				b*=2;count++;
			}
			else{
				cout<<"-1"<<endl;
				x=0;
				break;
			}
		}
		if(x){
			cout<<count<<endl;
		}
		x=1;
	}
}