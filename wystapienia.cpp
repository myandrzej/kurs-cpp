#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

using namespace std;


int main() {
    int tab[10];
    int szukana;
    int licznik=0;

    cout << "podaj 10 liczb:" << endl;
    for (int i = 0; i < 10; i++) {
        cout<<"Liczba: " <<i+1<<": ";
        cin >> tab[i];
    }
    
    cout<<"Podaj liczbe, ktorej wystapienia cchesz policzyc: ";
    cin>>szukana;
    
   for (int i=0; i<10; i++)
   {
       if (szukana ==tab[i])
       {
           licznik++;
       }
   }
    


cout<<"Liczba " << szukana << "wystepuje w tablicy " <<licznik << " raz(y)." <<endl;
return 0;
    

    return 0;
}
