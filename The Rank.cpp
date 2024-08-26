#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, ted, temp=0, num=1, sum=0;
	cin>>ted;
	cin>>a>>b>>c>>d;
	temp=a+b+c+d;
	for(int i=1;i<ted;i++){
		cin>>a>>b>>c>>d;
		sum=a+b+c+d;
		if(temp<sum){
			num++;
		}
	}
	cout<<num;
}