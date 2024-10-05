#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,s=0;
    cin >> n;
    
    while(n>0){
       if(n&1) s++;
       n>>=1;
    }
    cout<<s;
    
    return 0;
}