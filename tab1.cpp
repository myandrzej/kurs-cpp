#include <iostream>
using namespace std;

int main() {
    int tablica[5];

    // Wczytywanie 5 liczb od użytkownika
    cout << "Podaj 5 liczb calkowitych: ";
    for (int i = 0; i < 5; i++) {
        cin >> tablica[i];
    }

    // Wypisywanie liczb w jednej linii
    cout << "Wczytane liczby: ";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
