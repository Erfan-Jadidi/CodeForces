#include<iostream>
using namespace std;
int bmm(int , int );
int main(){
	int a, b, c, d=0, i;
	cin>>a>>b>>c;
	for(i=0;c>0;i++){
		if(i%2==0){
			d=bmm(a, c);
			c-=d;
		}
		else{
			d=bmm(b, c);
			c-=d;
		}
	}
	if(i%2==0){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
int bmm(int a, int b){
	int temp=0;
	while(true){
        if(b == 0) break;
        temp = a%b;
        a = b;
        b = temp;
    }
	return a;
}