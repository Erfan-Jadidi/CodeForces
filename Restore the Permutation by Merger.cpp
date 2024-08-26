#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		int c[2*b];
		for(int j=0;j<2*b;j++){
			cin>>c[j];
		}
		for(int j=0;j<2*b;j++){
			for(int k=j+1;k<2*b;k++){
				if(c[j]!=0){
					if(c[j]==c[k]){
						c[k]=0;
					}
				}
			}
		}
		for(int j=0;j<2*b;j++){
			if(c[j]!=0){
				cout<<c[j]<<" ";
			}
		}
		cout<<endl;
	}
}