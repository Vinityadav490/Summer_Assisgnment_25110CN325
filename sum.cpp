#include<iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0; i<=n; i++){
     sum=sum+i;
    }
    cout<<sum;
}