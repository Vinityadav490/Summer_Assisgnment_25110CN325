#include<iostream>
using namespace std;
int main(){
 int n, i, table;
cout<<"Enetr the number n:";
cout<<endl;
cin>>n;
for(int i=1; i<=10; i++){
  table=n*i;
  cout<<table<<endl;
}
return 0;
}