#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin>>a;
	while(a--){
		cin>>b>>c;
		if(c==0){
			if(b%2!=0){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
		}
		else if(b>c){
			if(b%2==0 and c%2==0){
				cout<<"0"<<endl;
			}
			else if(b%2==1 and c%2==1){
				cout<<"0"<<endl;
			}
			else{
				cout<<"1"<<endl;
			}
		}
		else{
			cout<<c-b<<endl;
		}
	}
}