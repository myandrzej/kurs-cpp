#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    int suma = 0;
    
    cout<<"Podaj 10 liczb:"<< endl;
    
    for (int i=0; i<10; i++)
    {
        cout<<"Liczba" << i +1 <<": ";
        cin>>tab[i];
        suma=suma+tab[i];
    }
    cout <<"Suma liczb wynosi: " <<suma <<endl;
    return 0;
    
}
