#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the digit n";
    cout<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        int d=n%10;
        count++;
        n=n/10;
    }
    cout<<count;
}