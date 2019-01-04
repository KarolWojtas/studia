#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int nwd(int liczba1, int liczba2){
    int a = 2, smaller, bigger;
    if(liczba1 > liczba2){
        smaller = liczba2;
        bigger = liczba1;
    } else {
        smaller = liczba1;
        bigger = liczba2;
    }
    while(true){
        a = bigger % smaller;
        if(a == 0){
            return smaller;
        }
        bigger = smaller;
        smaller = a;
    }

    return -1;
}
void printFibonacci(int limit = 10){
    int a = 0, b = 1, suma;
    printf("%d, %d, ",a, b );
    for (int i = 0; i < limit; ++i)
    {
        suma = a + b;
        a = b;
        b = suma;
        printf("%d, ", suma);
    }
    cout << endl;

}
int silnia(int liczba){
    int wynik = 1;
    if(liczba > 1){
        wynik = liczba * silnia( liczba - 1);
    }
    return wynik;
}
int main()
{
    cout << nwd(1827, 18) << endl;
    printFibonacci(19);
    cout << silnia(10) << endl;
    return 0;
}
