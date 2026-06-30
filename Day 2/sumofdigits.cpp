#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter your digit n";
    cout<<endl;

    cin>>n;
    while(n!=0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    cout<<sum;
}