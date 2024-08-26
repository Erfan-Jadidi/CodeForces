#include<iostream>
using namespace std;
int main(){
	char a[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>a[i][j];
		}
	}
	int sum_w=0, sum_b=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(a[i][j] == 'q') sum_b+=9;
			else if(a[i][j] == 'Q') sum_w+=9;
			else if(a[i][j] == 'r') sum_b+=5;
			else if(a[i][j] == 'R') sum_w+=5;
			else if(a[i][j] == 'b' or a[i][j]=='n') sum_b+=3;
			else if(a[i][j] == 'B' or a[i][j]=='N') sum_w+=3;
			else if(a[i][j] == 'p') sum_b++;
			else if(a[i][j] == 'P') sum_w++;
		}
	}
	if(sum_b>sum_w){
		cout<<"Black";
	}
	else if(sum_b<sum_w){
		cout<<"White";
	}
	else{
		cout<<"Draw";
	}
}