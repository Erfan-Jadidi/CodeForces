#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]=='4' or a[i]=='1'){
			if(a[i]=='4' and a[i-1]=='4' and a[i-2]=='1'){
				
			}
			else if(a[i]=='4' and a[i-1]=='1'){
				
			}
			else if(a[i]=='1'){
				
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}