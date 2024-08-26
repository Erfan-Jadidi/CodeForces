#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>a>>b>>c;
		if(a==b && a==c && b==c){
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		else if(a==b){
			if(a>c){
				cout<<"YES"<<endl;
				cout<<c<<" "<<c<<" "<<b<<endl;
			}	
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(a==c){
			if(a>b){
				cout<<"YES"<<endl;
				cout<<b<<" "<<b<<" "<<c<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(b==c){
			if(b>a){
				cout<<"YES"<<endl;
				cout<<a<<" "<<a<<" "<<c<<endl;
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