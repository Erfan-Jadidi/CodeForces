#include<iostream>
using namespace std;
int main(){
	int a, r[10];
	cin>>a;
	string b;
	cin>>b;
	for(int i=0;i<10;i++){
		r[i]=0;
	}
	for(int i=0;i<a;i++){
		if(b[i]=='L'){
			for(int j=0;j<10;j++){
				if(!r[j]){
					r[j]=1;
					break;
				}
			}
		}
		else if(b[i]=='R'){
			for(int j=9;j>=0;j--){
				if(!r[j]){
					r[j]=1;
					break;
				}
			}
		}
		else{
			r[b[i]-'0']=0;
		}
	}
	for(int j=0;j<10;j++){
		cout<<r[j];
	}
}