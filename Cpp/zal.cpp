
void wczytajDoTablicy(){
    float tablica[8];
    for(unsigned short i = 0; i < 8; i++){
        cout << "Podaj liczbe" << endl;
        cin >> tablica[i];
    }
    cout << "Elementy tablicy: ";
    
    for(unsigned short j = 0; j < 8; j++){
        cout << tablica[j]<< ", ";
    }
    cout << endl;
    
    float min;
    unsigned short index;
    for(int i = 0; i < 8; i++){
        min = tablica[i];
        for(int j = i; j < 8 - i; i++){
            if(min < tablica[j]){
                min = tablica[j];
                index = j;
            }
        }
    }
    cout << "min: " << min;
    
}
