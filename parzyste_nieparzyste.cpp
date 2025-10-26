#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    
cout << "Podaj 10 liczb calkowitych:" << endl;
for (int i = 0; i < 10; i++) 
{
    cout << "Liczba " << i + 1 << ": ";
    cin >> tab[i];
}
cout << "Liczby parzyste: " << endl;
for (int i = 0; i<10; i++)
{
    if (tab[i] % 2 == 0){
        cout<< tab[i] << " ";
    }
}

cout << "Liczby nieparzyste: " << endl;
for (int i = 0; i<10; i++)
{
    if (tab[i] % 2 != 0){
        cout<< tab[i] << " ";
    }
}
return 0;
}
