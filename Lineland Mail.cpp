#include<iostream>
using namespace std;
int main(){
	int a, min=0, max=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	if(a==2){
		cout<<b[1]-b[0]<<" "<<b[1]-b[0]<<endl;
		cout<<b[1]-b[0]<<" "<<b[1]-b[0]<<endl;
	}
	else{
		cout<<b[1]-b[0]<<" "<<b[a-1]-b[0]<<endl;
		for(int i=1;i<a-1;i++){
			min=0;max=0;
			if(b[i]-b[i-1]>b[i+1]-b[i]){
				min=b[i+1]-b[i];
			}
			else{
				min=b[i]-b[i-1];
			}
			if(b[i]-b[0]>b[a-1]-b[i]){
				max=b[i]-b[0];
			}
			else{
				max=b[a-1]-b[i];
			}
			cout<<min<<" "<<max<<endl;
		}
		cout<<b[a-1]-b[a-2]<<" "<<b[a-1]-b[0]<<endl;
	}
}