#include<iostream>
using namespace std;
int main(){
	int b;
	cin>>b;
	string a[b];
	
	for(int i=0;i<b;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<b;i++){
		if(a[i].size()>10){
		cout<<a[i][0]<<a[i].size()-2<<a[i][a[i].size()-1]<<endl;
		}
		else{
			cout<<a[i]<<endl;
		}
	}
	
	
}