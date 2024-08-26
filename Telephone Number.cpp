#include<iostream>
using namespace std;
int main(){
	int a, b;
	string c;
	bool x=0;
	cin>>a;
	while(a--){
		cin>>b>>c;x=0;
		if(b==11){
			if(c[0]=='8') cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else if(b>11){
			for(int i=0;i<=(b-11);i++){
				if(c[i]=='8') x=1;
			}
			if(x){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}