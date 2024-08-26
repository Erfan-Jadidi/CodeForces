#include<iostream>
using namespace std;
int main(){
	long long int a, b, ans=0, temp_1=0;
	cin>>a>>b;
	if(a%2==1){
		if(b<=(a/2+1)){
			ans=b*2-1;
		}
		else{
			temp_1=b-(a/2+1);
			ans=temp_1*2;
		}
	}
	else{
		if(b<=(a/2)){
			ans=b*2-1;
		}
		else{
			temp_1=b-(a/2);
			ans=temp_1*2;
		}
	}
	cout<<ans;
	
}