#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

const int maxn=1e6+10;
int a[maxn], tmp[maxn], inver=0;

void merge_sort(int start, int end){
	if((end-start)==0){
		return;
	}
	int third_1=(end+start)/3+1, third_2=2*third_1;
//	cout<<third_1<<endl;
	merge_sort(start, third_1);
	cout<<"*";
	merge_sort(third_1, third_2);
	cout<<"@";
	merge_sort(third_2, end);
	cout<<"#";
	int p_1=start, p_2=third_1, p_3=third_2, ptmp=0;
	cout<<"p_1:"<<p_1<<"  p_2:"<<p_2<<"  p_3:"<<p_3<<endl;
	while(p_1<third_1 || p_2<third_2 || p_3<end){
		if(p_1<third_1 && (p_2==third_2 || a[p_1]<a[p_2])){
			if(p_3==end || a[p_1]<a[p_3]){
				tmp[ptmp++]=a[p_1++];
			}
			else{
				tmp[ptmp++]=a[p_3++];
			}
		}
		else if(p_2<third_2 && (p_3==end || a[p_2]<a[p_3])){
			tmp[ptmp++]=a[p_2++];
		}
		else{
			inver++;
			tmp[ptmp++]=a[p_3++];
		}
	}
	for(int i=end-1;i>=start;i--){
		a[i]=tmp[ptmp--];
	}
	return;
}

int main(){
	flash;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(0, n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
