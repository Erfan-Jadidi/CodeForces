#include<iostream>
using namespace std;
int main(){
	int a, temp=0;
	string b;
	cin>>a;
	while(a--){
		bool x=1;
		cin>>b;
		temp=b.length();
		if(temp%2==0){
			for(int i=0;i<temp/2;i++){
				x=1;
				if(b[i]==b[i+(temp/2)]){
					x=0;
				}
				else{
					break;
				}
			}
			if(x){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}