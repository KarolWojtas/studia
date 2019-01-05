#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

void wyswietlTablice(){
    int tablica[5];
    tablica[0] = 1;
    tablica[1] = 2;
    tablica[2] = 3;
    tablica[3] = 4;
    tablica[4] = 5;
    for(int i = 0; i < 5; i++){
        cout << "Element["<< i << "]: "<<tablica[i] << endl;
    }
    int tablica2[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << "Element["<< i << "]: "<<tablica2[i] << endl;
    }
}
void wypiszTabliceZKonsoli(){
    int tab[6];
    
    for(int i = 0; i < 6; i++){
        cout << "Podaj liczbe: "<< endl;
        cin >> tab[i];
    }
    for(int i = 0; i < 6; i++){
        cout << "Element["<< i << "]: "<<tab[i] << endl;
    }
    
}
int main(){
    return 0;
}
