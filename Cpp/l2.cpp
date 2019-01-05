void
wyswietlParzyste (int limit)
{
  int parzysta = 2;
  for (int i = 1; i <= limit; i++)
    {
      cout << parzysta << "; ";
      parzysta += 2;
    }
}

void
wyswietlNaturalne (int limit)
{
  int naturalna = 1;
  for (int i = 0; i < limit; i++)
    {
      cout << naturalna << ", ";
      naturalna++;
    }
}

void
dodawajLiczbyDopokiDodatnie ()
{
  float wczytana, suma = 0;

  do
    {
      cout << "Podaj liczbe" << endl;
      cin >> wczytana;
      if (wczytana > 0)
	{
	  suma += wczytana;
	}
    }
  while (wczytana > 0);
  cout << "Suma wczytanych liczb to: " << suma;

}

void
wypiszDzienTygodnia (unsigned short dzien)
{
  switch (dzien)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      cout << "Dzien roboczy" << endl;
      break;
    case 6:
    case 7:
      cout << "Weekend" << endl;
      break;
    default:
      cout << "Niepoprawna liczba";

    }
}

void wypiszTrzycyfrowe ()
{
    unsigned short jednosci, dziesiatki, setki;
    unsigned int suma = 0;
    
    for(setki = 1; setki < 10; setki++){
        for(dziesiatki = 0; dziesiatki <= 9; dziesiatki++){
            for(jednosci = 0; jednosci <=9; jednosci++){
                if(jednosci != dziesiatki && jednosci != setki && dziesiatki != setki){
                    cout << setki << dziesiatki << jednosci << endl;
                    suma++;
                }
            }
        }
    }
    cout << "Ilosc liczb wyniosla: " << suma << endl;
    
}
void zadanie6(){
    unsigned int i = 0, suma = 0, n;
    cout << "Ile liczb= ";
    cin >> n;
    licz:
    suma +=i;
    if(i == n)
    goto koniec;
    else
    {
        i++;
        goto licz;
    }
    koniec;
    cout << "Suma"<< n << " kolejnych liczb naturalnych wynosi: " << suma << endl;
}


int
main ()
{
  /*cout << "Podaj ile liczb przystych wyEwietlic"<<endl;
     int limit;
     cin >> limit;
     wyswietlParzyste(limit); */
  /*cout << "Podaj ile liczb naturalnych wyswietlic" << endl;
     int limitN;
     cin >> limitN;
     wyswietlNaturalne(limitN); */
 // dodawajLiczbyDopokiDodatnie ();
    wypiszTrzycyfrowe();
    wczytajDoTablicy();

  return 0;
}
