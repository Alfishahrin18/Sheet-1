#include <bits/stdc++.h> 
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int values[] = {A, B, C};
    sort(values, values + 3);

    for (int i = 0; i < 3; i++) {
        cout << values[i] << endl;
    }
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
}
