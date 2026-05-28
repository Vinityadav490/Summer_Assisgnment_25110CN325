#include<iostream>
using namespace std;
int main(){
    int fact=1, n, i;
    cout<<"Enter the number";
    cout<<endl;
    cin>>n;
    for(int i=n; i>=1; i--){
        fact=fact*i;
        
    }
    cout<<fact;
}