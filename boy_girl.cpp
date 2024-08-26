#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	char c[100];
	int b=a.length(), d=0;
	for(int i=0;i<a.length();i++){
		for(int j=0;j<a.length();j++){
			if(i!=j){
				if(a[i]==a[j]){
					a.erase(j, 1);
					i--;
				}
			}
		}
	}
	if(a.length()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}