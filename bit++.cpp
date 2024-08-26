#include<iostream>
using namespace std;
int main(){
	int a, b=1, x=0;
	cin>>a;
	string c;
	while(b<=a){
		cin>>c;
		if(c=="X++" or c=="++X"){
			x++;
		}
		else if(c=="--X" or c=="X--"){
			x--;
		}
		b++;
	}
	cout<<x;
}