#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, temp=0, bin[31], arr_1=0, arr_2=0, sum=0;
	cin>>a;
	bool x=1;
	for(int i=0;i<30;i++){
		bin[i]=0;
	}
	for(int j=0;j<a;j++){
		x=1;sum=0;
		cin>>b;
		temp=0;arr_1=0;arr_2=0;
		for(int i=0;i<=30;i++){
			if(pow(2, i)<=b && pow(2, i+1)>b){
				temp=i;
				break;
			}
		}
		b-=pow(2, temp);
		bin[temp]=1;
		for(int i=temp-1;i>=0;i--){
			if(b>=0){
				if(pow(2, i)<=b && pow(2, i+1)>b){
					bin[i]=1;
					b-=pow(2, i);
				}	
			}
		}
		for(int i=0;i<=temp;i++){
			if(bin[i]==1){
				arr_1=i;
				arr_2=arr_1;
				for(int k=i+1;k<=temp;k++){
					if(bin[k]==1){
						x=0;
					}
				}
				if(x){
					arr_2++;
				}
				break;
			}
		}
		end:;
		for(int i=arr_2;i>=0;i--){
			if(i==arr_2 or i==arr_1){
				sum+=pow(2, i);
			}
		}
		cout<<sum<<endl;
	}
}