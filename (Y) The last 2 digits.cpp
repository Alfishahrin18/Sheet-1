#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    long long result = (A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100;
    result %= 100;
    if (result < 10) {
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }
}
