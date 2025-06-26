// find GCD
#include <iostream>
using namespace std;

int GCD(int m, int n) {
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return m;
    }
    return GCD(n % m, m);
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "GCD is: " << GCD(a, b);
    return 0;
}
