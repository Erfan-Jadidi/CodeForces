#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	while(a--){
		cin>>b;
		int c[b], max=0, sec_max=0;
		cin>>c[0]>>c[1];
		max=c[0];sec_max=c[1];
		if(sec_max>max){
			swap(max, sec_max);
		}
		for(int i=2;i<b;i++){
			cin>>c[i];
			if(max<c[i]){
				sec_max=max;
				max=c[i];
			}
			else if(sec_max<c[i]){
				sec_max=c[i];
			}
		}
		cout<<max+sec_max<<endl;
	}
}