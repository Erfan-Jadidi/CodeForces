#include<iostream>
using namespace std;
int main(){
	int a, b, cn;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		if(b==c){
			cout<<"0"<<endl;
		}
		else if(b<c){
			if((c-b)%2==0){
				cout<<"2"<<endl;
			}
			else{
				cout<<"1"<<endl;
			}
		}
		else{
			if((b-c)%2==0){
				cout<<"1"<<endl;
			}
			else{
				cout<<"2"<<endl;
			}
		}
	}
}