#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    if (n < 2) {
        cout << "Nie jest pierwsza";
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Nie jest pierwsza";
            return 0;
        }
    }

    cout << "Jest pierwsza";
    return 0;
}
