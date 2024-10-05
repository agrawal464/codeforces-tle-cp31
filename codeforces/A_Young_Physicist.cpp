#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    long long sum_x = 0, sum_y = 0, sum_z = 0;
    long long x, y, z;

    for (long long i = 0; i < T; i++) {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
