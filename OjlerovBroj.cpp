#include <iostream>
using namespace std;

int main() {
    int n;
    long double faktorijel = 1.0;
    long double e = 1.0;

    cout << "Unesi n: ";
    cin >> n;

    if (n < 0)
        cout << "Greska";
    else {
        for (int i = 1; i <= n; ++i) {
            faktorijel *= i;
            e = e + (1 / faktorijel);
        }
        cout << "Faktorijel od " << n << " = " << faktorijel << " Suma: " << e;
    }

    return 0;
}