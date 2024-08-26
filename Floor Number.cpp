#include<iostream>
using namespace std;
int main(){
	int ted, a, b, tab=0;
	cin>>ted;
	while(ted--){
		cin>>a>>b;tab=0;
		if(a<=2){
			cout<<"1"<<endl;
		}
		else{
			a-=2;
			tab++;
			if(a%b==0){
				tab+=(a/b);
			}
			else{
				tab+=(a/b)+1;
			}
			cout<<tab<<endl;
		}
	}
}