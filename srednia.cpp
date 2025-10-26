#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tab[10];
    double suma = 0.0;
    int licznik = 0;

    cout << "Podaj 10 liczb:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tab[i];

        if (tab[i] > 0) {
            suma += tab[i];
            licznik++;
        }
    }

    if (licznik > 0) {
        double srednia = suma / licznik;
        cout <<setprecision(2);
        cout << "Srednia liczb dodatnich wynosi: " << srednia << endl;
    } else {
        cout << "Brak liczb dodatnich!" << endl;
    }

    return 0;
}
