#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int fibo(int a, int b, int c);
int main(){
	migmig;
	long long int a, f_0=0, f_1=1, temp, temp_1;
	cin>>a;
	if(a==3){
		cout<<"1 1 1";
		return 0;
	}
	else if(a==1){
		cout<<"1";
		return 0;
	}
	else if(a==2){
		cout<<"1 1";
		return 0;
	}
	temp=fibo(f_0, f_1, a);
//	cout<<temp<<endl;
	if(temp>0){
		temp_1=fibo(f_0, f_1, a-temp);
//		cout<<temp_1<<endl;
		if(temp_1>0){
			cout<<a-temp-temp_1<<" "<<temp_1<<" "<<temp;
		}
		else{
			cout<<"I'm too stupid to solve this problem";
		}
	}
	else{
		cout<<"I'm too stupid to solve this problem";
	}

	return 0;
}
int fibo(int a, int b, int c){
	int temp=0;
	if(a+b==c){
		return b;
	}
	else if(a+b>c){
		return 0;
	}
	temp=a;
	a=b;
	b+=temp;
	return fibo(a, b, c);
}
