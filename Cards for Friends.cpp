#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	float sum_1=0, sum_2=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c>>d;sum_1=1;sum_2=1;
		while(b%2==0){
			sum_1*=2;
			b/=2;
		}
		while(c%2==0){
			sum_2*=2;
			c/=2;
		}
		if(sum_1*sum_2>=d){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
/*//		if(b%2==0 && c%2==0){
//			sum_1=1;sum_2=1;
//			while(b%2==0){
//				sum_1++;
//				b/=2;
//			}
//			while(c%2==0){
//				sum_2++;
//				c/=2;
//			}
//			if(sum_1*sum_2>=d) cout<<"YES"<<endl;
//			else cout<<"NO"<<endl;
//		}
//		else if(b%2!=0 && c%2!=0){
//			if(d>1) cout<<"NO"<<endl;
//			else cout<<"YES"<<endl;
//		}
//		else if(b%2==0){
//			
//		}*/