#include<iostream>
using namespace std;
int main(){
    int n,prdt=1;
    cout<<"Enter your digit n";
    cout<<endl;

    cin>>n;
    while(n!=0){
        int d=n%10;
        prdt=prdt*d;
        n=n/10;
    }
    cout<<prdt;
}