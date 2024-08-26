#include<iostream>
using namespace std;
int main(){
	int a, b=0, min=0, temp=0;
	cin>>a;
	int d[a];
	for(int i=0;i<a;i++){
		cin>>b;
		int c[b];
		cin>>c[0];
		min=c[0];
		for(int j=1;j<b;j++){
			cin>>c[j];
			if(min>c[j]) min=c[j];
		}
		for(int j=0;j<b;j++){
			temp+=(c[j]-min);
		}
		d[i]=temp;
		temp=0;
	}
	for(int i=0;i<a;i++){
		cout<<d[i]<<endl;
	}
}