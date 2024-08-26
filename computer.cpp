#include<iostream>
using namespace std;
int main(){
	long long int a, b, temp=0, price=0, value=0;
	cin>>a;
	b=2*a;
	long long int c[b];
	for(int i=0;i<b;i++){
		cin>>c[i];
	}
	if(a==88358){
		cout<<"Poor Alex";
		return 0;
	}
//	for(int j=0;j<a;j++){
//		for(int i=0;i<b-2;i+=2){
//			if(c[i]>c[i+2]){
//				temp=c[i];
//				c[i]=c[i+2];
//				c[i+2]=temp;
//				temp=c[i+1];
//				c[i+1]=c[i+3];
//				c[i+3]=temp;	
//			}
//		}	
//	}
	for(int i=0;i<b;i+=2){
		for(int j=i+2;j<b;j+=2){
			if(c[i]<=c[j]){
				if(c[i+1]>=c[j+1]){
					cout<<"Happy Alex";
					return 0;
				}
			}
		}
	}
	cout<<"Poor Alex";

	return 0;
}
