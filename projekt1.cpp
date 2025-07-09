#include <iostream>

using namespace std;

int silnia(int liczba)
{
	int wynik=1;
	for(int i=1;i<=liczba;i++)
	{
	 wynik=wynik*i;	
	}

	return wynik;
}
void liczbaPierwsza(int liczba)
{
   int licznik=0;
   for(int i=1;i<=liczba;i++)
	{
	  if(liczba % i == 0 )
		{
		    licznik++;
		}	
	}
	if(licznik <= 2) 
	{
	cout<<"Liczba Pierwsza" << endl;	
	}
	else 
	{
	 cout<<"Liczba zlozona" << endl;
	}
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
		cout << "1. Silnia"  << endl;
		cout << "2. Liczba Pierwsza"<< endl;

        cin >> wyjscie;
	if(wyjscie == 1)
	{
	 cout << "Silnia a: " << silnia(a) << endl << "Silnia B: " << silnia(b) << endl; 
	}
	else if(wyjscie == 2 )
	{
	cout<<"liczba a to: ";
	 liczbaPierwsza(a);
	cout<<"liczba b to: ";
	 liczbaPierwsza(b);	
	}

    } while(wyjscie != 0);
    return 0;
}
