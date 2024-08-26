#include<iostream>
#define migmig() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	migmig();
	int a, b, c;
	cin>>a;
	bool x=0;
	while(a--){
		cin>>b>>c;
		int arr_1[b], arr_2[b], end=b-1, temp=0;x=0;
		for(int i=0;i<b;i++){
			cin>>arr_1[i];
			if(arr_1[i]>c){
				x=1;
			}
		}
		for(int i=0;i<b;i++){
			cin>>arr_2[i];
			if(arr_2[i]>c){
				x=1;
			}
		}
		if(x){
			cout<<"NO"<<endl;
		}
		else{
			for(int i=0;i<b;i++){
				if(arr_1[i] + arr_2[end]<=c){
					temp++;
				}
				end--;
			}
			if(temp==b) cout<<"YES"<<endl;
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	
}