#include<iostream>
using namespace std;
int main(){
	long long int a, b, c, d, sum=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c>>d;sum=0;
		if(c>=d){
			if(b%2==1){
				sum+=(b/2)*d;
				sum+=c;
			}
			else{
				sum+=(b/2)*d;
			}
		}
		else{
			if((2*c)<=d){
				sum+=c*b;
			}
			else if((2*c)>d){
				if(b%2==1){
					sum+=(b/2)*d;
					sum+=c;
				}
				else{
					sum+=(b/2)*d;
				}	
			}
		}
		cout<<sum<<endl;
	}
}