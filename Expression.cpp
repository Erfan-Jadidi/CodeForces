#include<iostream>
using namespace std;
int main(){
	int a, b, c, temp=0;
	int d[6];
	cin>>a>>b>>c;
	d[0] = a+b+c;
	d[1] = (a+b)*c;
	d[2] = a*(b+c);
	d[3] = a*b*c;
	d[4] = (b*c)+a;
	d[5] = (a*b)+c;
	
	
	temp=d[1];
	for(int i=0;i<6;i++){
		if(d[i]>temp){
			temp=d[i];
		}
//		cout<<d[i]<<endl;
	}
	cout<<temp;
}