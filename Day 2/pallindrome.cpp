#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter your digit n";
    cout<<endl;
    cin>>n;
    int temp=n;
    while(temp!=0){
        int d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }

    if(n==rev) cout<<"The digit is pallindrome";

    else cout<<"The digit is not pallindrome";
}