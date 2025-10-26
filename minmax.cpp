#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int tab[N];

    cout << "Podaj 10 liczb calkowitych:" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tab[i];
    }

    int min = tab[0];  
    int max = tab[0];  

    for (int i = 1; i < N; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    cout << "Najmniejsza liczba: " << min << endl;
    cout << "Najwieksza liczba: " << max << endl;

    return 0;
}
