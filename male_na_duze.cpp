
#include <iostream>
#include <cctype>

using namespace std;
int main()
{
char tekst[40];
cout<<"Podaj tekst: ";
cin>>tekst;

for (int i=0; tekst[i]; i++)
{
    tekst[i] = toupper(tekst[i]);
}
cout<<"Tekst wielkimi literami: "<<tekst <<endl;
    return 0;
}
