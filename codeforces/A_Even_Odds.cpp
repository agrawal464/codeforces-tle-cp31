#include <bits/stdc++.h>
using namespace std;

int main() {
    long long total_numbers, position;
    cin >> total_numbers >> position;

    long long odd_count = (total_numbers + 1) / 2;

    if (position <= odd_count) {
        
        cout << 2 * position - 1 << endl;
    } else {
        
        cout << 2 * (position - odd_count) << endl;
    }

    return 0;
}
