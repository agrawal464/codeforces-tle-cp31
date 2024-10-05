#include<bits/stdc++.h>
using namespace std;

int main() {
   
     int a,b;
   cin>>a>>b;
    int ans=0;
   ans = min(a,b);
   if(ans%2==0){
    cout<<"Malvika"<<endl;
   }
   else{
    cout<<"Akshat"<<endl;
   }
    return 0;
}