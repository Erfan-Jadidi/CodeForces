#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%2==0 && a!=0){
		for(int i=2;i<=(a/2)+1;i++){
			if(i%2==0 && (a-i)%2==0 && (a-i)!=0){
				cout<<"YES";
				break;
			}
			else{
				cout<<"NO";
			}
		}
	}
	else{
		cout<<"NO";
	}
	
}