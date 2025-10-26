#include <iostream>
using namespace std;

int main()
{
    int tab[8];
    
cout << "Podaj 8 liczb calkowitych:" << endl;
for (int i = 0; i < 8; i++) 
{
    cout << "Liczba " << i + 1 << ": ";
    cin >> tab[i];
}
cout << "Liczby w odwrotnej kolejnosci: " << endl;
for (int i = 7; i>=0; i--)
{
    cout << tab[i] << " ";
}
return 0;
}
