#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, temp_1=0, temp_2=0, temp_3=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b;
		temp_1+=b;
		cin>>c;
		temp_2+=c;
		cin>>d;
		temp_3+=d;
	}
	if(temp_1==0 && temp_2==0 && temp_3==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}