#include<iostream>
using namespace std;
int main(){
	int a, b, car=0, one=0, two=0, tre=0, temp=0;
	bool x=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b==4) car++;
		else if(b==3) tre++;
		else if(b==2) two++;
		else one++;
	}
	if(tre<one){
		car+=tre;
		one-=tre;
		tre=0;
	}
	else if(one<=tre){
		car+=one;
		tre-=one;
		one=0;
	}
	if(tre>0){
		car+=tre;
		tre=0;
	}
	if(two>0){
		car+=(two/2);
		two%=2;
	}
	temp=one+(two*2);
	if(temp<=4 && temp>0){
		car++;
	}
	else if(temp%4!=0){
		car+=(temp/4)+1;
	}
	else{
		car+=temp/4;
	}
	cout<<car;
	
}