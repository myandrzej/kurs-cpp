

#include <iostream>
#include <cstring>

using namespace std;
int main()
{
char pierwsze_slowo[50], drugie_slowo[50];

cout<<"Podaj pierwsze slowo: ";
cin>>pierwsze_slowo;
cout<<"Podaj drugie slowo: ";
cin>>drugie_slowo;

int cmp = strcmp(pierwsze_slowo, drugie_slowo);

if (cmp == 0)
{
cout <<"Napisy sa rowne" <<endl;
}
else if(cmp >0)
cout<<"Pierwsze slowo jest wieksze leksykoraficznie"<<endl;
else cout <<"Drugie slowo jest wieksze leksykograficznie"<<endl;
return 0;

}
