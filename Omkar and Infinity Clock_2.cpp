#include<iostream>
using namespace std;
int main(){
	long long int a, b, c, max=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		int d[b], e[b];
		for(int j=0;j<b;j++){
			cin>>d[j];
		}
		if(c==1){
			max=d[0];
			for(int j=1;j<b;j++){
				if(max<d[j]){
					max=d[j];
				}
			}
			for(int j=0;j<b;j++){
				d[j]=max-d[j];
			}
		}
		else if(c%2==1){
			for(int k=1;k<=3;k++){
				max=d[0];
				for(int j=1;j<b;j++){
					if(max<d[j]){
						max=d[j];
					}
				}
				for(int j=0;j<b;j++){
					d[j]=max-d[j];
				}
			}
		}
		else{
			for(int k=1;k<=2;k++){
				max=d[0];
				for(int j=1;j<b;j++){
					if(max<d[j]){
						max=d[j];
					}
				}
				for(int j=0;j<b;j++){
					d[j]=max-d[j];
				}
			}
		}
		for(int j=0;j<b;j++){
			cout<<d[j]<<" ";
		}
	}
}