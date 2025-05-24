#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars;
        if (i <= n) {
            stars = i;               // Top half (increasing)
        } else {
            stars = 2 * n - i;       // Bottom half (decreasing)
        }
        for (int j = 1; j <= stars; j++) {
            cout << " *";
        }
        cout << endl;
    }
}

int main() {
    cout << "enter the number: ";
    int n;
    cin >> n;
    print(n);
}
