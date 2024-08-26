#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, temp=0;/* a-->d    b-->e, f   c-->d, e, f */
	cin>>a>>b>>c>>d>>e>>f;
	if(a<=d){
		d-=a;
		temp=e+d;
		if(temp>=b){
			temp-=b;
			if(temp+f >= c){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
}