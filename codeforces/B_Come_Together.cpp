#include<bits/stdc++.h>
using namespace std;

void solve(){
    int xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    int AB = abs(xa - xb) + abs(ya - yb);
    int AC = abs(xa - xc) + abs(ya - yc);
    int BC = abs(xb - xc) + abs(yb - yc);


    int ans  = ( AB + AC - BC )/2 +1;
    cout<< ans <<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}