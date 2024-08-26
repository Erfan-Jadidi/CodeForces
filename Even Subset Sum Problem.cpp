#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		int c[b], temp=-1;
		if(b>=2){
			for(int j=0;j<b;j++){
				cin>>c[j];
				if(c[j]%2==0){
					temp=j;
				}
			}
			if(temp!=-1){
				cout<<"1"<<endl<<temp+1<<endl;
			}
			else{
				cout<<"2"<<endl<<"1 2"<<endl;
			}
		}
		else if(b==1){
			cin>>c[0];
			if(c[0]%2==1){
				cout<<"-1"<<endl;
			}
			else{
				cout<<"1"<<endl<<"1"<<endl;
			}
		}
	}
}