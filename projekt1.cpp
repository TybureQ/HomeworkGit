#include <iostream>

using namespace std;

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
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
