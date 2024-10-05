#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n,m,a;
    cin >> n >> m >> a;

    long long width = (n+a-1)/a;
    long long height = (m+a-1)/a;

    unsigned long long sum = width*height;
    cout<< sum <<endl; 

    return 0;
}