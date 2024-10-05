#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouyAEIOUY";
    string result = " ";

    for(char ch:s){
        if(vowels.find(ch) == string :: npos){
            char lower_ch = tolower(ch);
            result +='.';
            result += lower_ch;
        }
    }
    cout<<result<<endl;
    
    return 0;
}