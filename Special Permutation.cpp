#include<iostream>
using namespace std;
int main(){
	int a, temp=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	for(int i=0;i<a;i++){
		if(b[i]%2==1){
			int y=0;
			y=b[i];
			int x[y];
			for(int j=0;j<y;j++){
				x[j]=j+1;
			}
			temp=x[y/2];
			x[y/2]=x[(y/2+1)];
			x[(y/2+1)]=temp;
			for(int j=y-1;j>=0;j--){
				cout<<x[j]<<" ";
			}
		}
		else{
			for(int j=b[i];j>0;j--){
				cout<<j<<" ";
			}	
		}
		
		cout<<endl;
	}
}