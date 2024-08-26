#include<iostream>
using namespace std;
int gcd(int , int );
int lcm(int , int );
int main(){
	int a, b=0, c=0, d=0, e=0, f=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		c=1;
		d=1;
		e=1;
		f=b-3;
		while(gcd(c, d)!=lcm(e, f)){
			
		}
	}
}
int gcd(int a, int b){
	int temp=0;
	while(true){
	    if(b == 0) break;
	    temp = a%b;
	    a = b;
	    b = temp;
	}
	return a;
}
int lcm(int a, int b){
	int max=0;
	if(a > b) max = a;
    else max = b;
    while(true){
        if(max % a == 0 && max % b == 0) break;
        else ++max;
    }
    return max;
}