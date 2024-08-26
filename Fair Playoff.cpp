#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b[4], one=0, two=0;
	cin>>a;
	while(a--){
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		if(b[0]>b[1]) one=b[0];
		else one=b[1];
		if(b[2]>b[3]) two=b[2];
		else two=b[3];
		sort(b, b+4);
		if(one>two){
			if(b[3]==one and b[2]==two){
				cout<<"YES"<<endl;
			} 
			else{
				cout<<"NO"<<endl;
			} 
		}
		else{
			if(b[3]==two and b[2]==one){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}