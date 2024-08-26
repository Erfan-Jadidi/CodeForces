#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin>>a;
	int d[a];
	for(int i=0;i<a;i++){
		cin>>b>>c;
		if((b*c)%2==1){
			d[i]=(b*c)/2+1;
		}
		else{
			d[i]=(b*c)/2;
		}
	}
	for(int i=0;i<a;i++){
		cout<<d[i]<<endl;
	}
}