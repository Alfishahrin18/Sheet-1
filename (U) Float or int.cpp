#include <bits/stdc++.h>
using namespace std;
int main()
 {
    double N;
    cin >> N;

    if (N == (int)N) {
        cout << "int " << (int)N << endl;
    } else {
        int integerPart = (int)N;
        double decimalPart = N - integerPart;
        cout << "float " << integerPart << " " << fixed << setprecision(6) << decimalPart << endl;
    }
}
