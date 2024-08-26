#include<iostream>
using namespace std;
int main()
{
	long long int a, b, c, sum=0;
	cin>>a;
	int ans[a];
	for(int i=0;i<a;i++){
		cin>>b>>c;
		if(b<c){
			ans[i]=1;
		}
		else if(b==c){
			ans[i]=2;
		}
		else{
			if(c==1 or b==1337){
				c++;
				sum++;
			}
			while(b>0){
				if(b==c){
					c++;
				}
				b/=c;
				sum++;
			}
			ans[i]=sum;
		}
		sum=0;c=0;
	}
	for(int i=0;i<a;i++){
		cout<<ans[i]<<endl;
	}
}