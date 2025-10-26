#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    const int N = 8;       
    double tab[N];         
    double suma = 0.0;

    cout << "Podaj 8 liczb:" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tab[i];
        suma += tab[i];
    }

    double srednia = suma / N;

    cout << fixed << setprecision(2); 
    cout << "\nSrednia wynosi: " << srednia << endl;

    return 0;
}
