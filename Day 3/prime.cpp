#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool flag=true;
    cout<<"Enter your number";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%2==0){
            flag=false;
          break;
        }
    }
    if(flag==true) cout<<"prime";
    else{
        cout<<"Not prime";
    }
}