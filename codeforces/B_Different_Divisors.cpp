#include<bits/stdc++.h>
using namespace std;


int nextPrime(int x){
    for(int i=x;;i++){
        bool t = true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    t=false;
                    break;
                }
            }
        if(t)return i;    
    }
    return 0;
}

void solve(){
    long long d;
    cin>>d;
    long long p = nextPrime(1+d);
    long long q = nextPrime(p+d);
     long long cube = p*p*p;
    cout<<min(p*q,cube)<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}