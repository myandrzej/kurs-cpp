#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

using namespace std;


int main() {
    int liczby[10];

    cout << "podaj 10 liczb:" << endl;
    for (int a = 0; a < 10; a++) {
        cin >> liczby[a];
    }
    
    int min = liczby[0];
    int max = liczby[0];
    int n = sizeof(liczby) / sizeof(liczby[0]);
    for (int i = 1; i < n; i++) {

        if (liczby[i] < min){
        min = liczby[i];
        }
        if (liczby[i] > max){
            max = liczby[i];
        }
        
    }

    
    cout << "minimalna:" << min << " " << max;


    return 0;
}
