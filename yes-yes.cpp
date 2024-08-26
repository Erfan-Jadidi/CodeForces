#include<iostream>
using namespace std;
int main(){
	int a, temp=0, sum=0;
	cin>>a;
	string b, c="Yes";
	for(int i=0;i<a;i++){
		cin>>b;temp=0;sum=0;
		for(int j=0;j<3;j++){
			if(b[0]==c[j]){
				temp=j;sum++;
				break;
			}
		}
		for(int k=1;k<b.length();k++){
			temp++;
			if(temp==3){
				temp=0;
			}
			if(b[k]==c[temp]) sum++;
		}
		if(sum==b.length()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}