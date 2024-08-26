#include<iostream>
using namespace std;
int main(){
	int a, ai=0, bi=0, ci=0;
	cin>>a;
	string b;
	for(int i=0;i<a;i++){
		ai=0;bi=0;ci=0;
		cin>>b;
		for(int j=0;j<b.length();j++){
			if(b[j]=='A') ai++;
			else if(b[j]=='B') bi++;
			else ci++;
		}
		if(bi==ai+ci){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}