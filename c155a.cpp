#include<iostream>
using namespace std;
int i,mn,mx,t,n,a;
main(){
cin>>n>>a;
mn=a,mx=a;
for(i=1;i<n;i++){
cin>>a;
if(a>mx) {mx=a;t++;}
if(a<mn) {mn=a;t++;}}
cout<<t;
}
