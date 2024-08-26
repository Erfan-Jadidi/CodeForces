#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a, b, temp=0, sum=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		for(int j=1;j<b;j++){
			sum=0;temp=0;
			if(b%j==0){
				temp=b/j;
				if(temp%2==1){
					for(int k=0;(pow(2, k)-1)<=temp;k++){
						if(temp==(pow(2, k)-1)){
							cout<<j<<endl;
							goto end;
						}
					}
				}
			}
		}
		end:;
	}
}