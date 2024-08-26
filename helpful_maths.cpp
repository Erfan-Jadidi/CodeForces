#include<iostream>
using namespace std;
int main(){
	int j=0, temp=0;
	string a;
	char b[100];
	cin>>a;
	for(int i=0;i<a.length();i+=2){
		b[j]=a[i];
		j++;
	}
	for(int i=0;i<(a.length()/2)+1;i++){
		for(int j=0;j<(a.length()/2);j++){
			if(b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	j=0;
	for(int i=0;i<a.length();i+=2){
		a[i]=b[j];
		j++;
	}
	cout<<a;
}