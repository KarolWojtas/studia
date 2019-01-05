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
void okreslCzyParzyste(){
    int tab[5] = {1, 2, 5, 8, 9};
    for(int i =0; i < 5; i++){
        cout << "Element [" << i << "] o wartosci "<< tab[i];
        if(tab[i] % 2 == 0){
            cout << " parzysty" << endl;
        } else {
            cout <<" nieparzysty" << endl;
        }
    }
}
void max(){
    int tab[5] = {5, 34, 88, 2, 10};
    int max = tab[0];
    for(int i = 0; i < 5; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    cout << "Max: "<< max << endl;
}
int main(){
    return 0;
}
