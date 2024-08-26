#include<iostream>
using namespace std;
int main(){
	int a, b, temp=0, count=0;
	cin>>a;
	int d[a];
	char e[5];
	e[0]='T';e[1]='i';e[2]='m';
	e[3]='u';e[4]='r';
	for(int i=0;i<a;i++){
		cin>>b;
		char c[b];
		for(int j=0;j<b;j++){
			cin>>c[j];
		}
		if(b==5){
			for(int j=0;j<5;j++){
				temp=0;
				for(int k=0;k<5;k++){
					if(e[j]==c[k]){
						temp++;
					}
				}
				if(temp==1){
					count++;
				}
				else{
					cout<<"NO"<<endl;
					break;
				}
			if(count==5){
				cout<<"YES"<<endl;
			}
		}
		}
		else{
			cout<<"NO"<<endl;
		}
		temp=0;
		count=0;
	}
}