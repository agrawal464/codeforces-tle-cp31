#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n,c=0;  
        cin >> n;
        string output = "";
        string v = "aeiou";  

        for (int j = 0 ; j < 5; j++) {
           
           {
                output += v[j];
                c++;
            }
        }
        cout << output << endl;
    }
    return 0;
}
