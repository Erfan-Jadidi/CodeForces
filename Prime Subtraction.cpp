#include<iostream>
using namespace std;
int main(){
    long long int a, b, c;
    cin>>a;
    while(a--){
        cin>>b>>c;
        if((b-c)>1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}