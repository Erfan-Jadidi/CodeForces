#include<iostream>
#define migmig() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	migmig();
	int a, temp_1=0, temp_2=0, sum=0;
	cin>>a;
	string s;
	for(int i=0;i<a;i++){
		cin>>s;temp_1=0;temp_2=0;sum=0;
		for(int j=0;j<s.length();j++){
			if(int(s[j])==40){
				temp_1++;
			}
			else if(int(s[j])==41){
				if(temp_1){
					temp_1--;
					sum++;
				}
			}
			else if(int(s[j])==91){
				temp_2++;
			}
			else if(int(s[j])==93){
				if(temp_2){
					temp_2--;
					sum++;
				}
			}
		}
		cout<<sum<<endl; 
	}
}