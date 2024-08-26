#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e, ted, temp_1=0, temp_2=0;
	cin>>ted;
	for(int i=0;i<ted;i++){
		cin>>a>>b>>c>>d>>e;temp_1=0;temp_2=0;
		if(a%c!=0){
			temp_1+=a/c+1;
		}
		else{
			temp_1+=a/c;
		}
		if(b%d!=0){
			temp_2+=b/d+1;
		}
		else{
			temp_2+=b/d;
		}
		if((temp_1+temp_2)<=e){
			cout<<temp_1<<" "<<temp_2<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}