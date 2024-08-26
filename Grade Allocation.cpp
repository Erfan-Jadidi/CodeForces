#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		int d[b];
		float temp=0;
		for(int j=0;j<b;j++){
			cin>>d[j];
			temp+=d[j];
		}
		if(temp<=c){
			cout<<temp<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
}