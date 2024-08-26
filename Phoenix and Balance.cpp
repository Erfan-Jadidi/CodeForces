#include<iostream>
using namespace std;
int main(){
	int a, c=0, temp=1, max=0, min=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		max=0;
		min=0;
		temp=1;
		cin>>c;
		int d[c];
		for(int j=0;j<c;j++){//pow2
			d[j]=temp*2;
			temp*=2;
		}
		max=d[c-1];
		if(c>3){
			for(int j=0;j<c/2-1;j++){
				max+=d[j];
			}
			for(int j=c/2-1;j<c-1;j++){
				min+=d[j];
			}	
		}
		else if(c==3){
			min=d[0]+d[1];
		}
		else if(c==2){
			min=d[0];
		}
		b[i]=max-min;
	}	
	for(int i=0;i<a;i++){
		cout<<b[i]<<endl;
	}
}