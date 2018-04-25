#include <iostream>
#define rozmiar 100                             // Rozmiar tablicy ktora nalezy posortowac
using namespace std;

void zbudujShell (int liczba, int n[])          // Funkcja sluzy do Wprowadzania liczb do tablicy
{

    for(int i=0;i<liczba;i++)
    {
        cout<<"Wprowadz liczbe"<<i+1<<" : ";    // Wyswietla kolejno ilosc wszystkich liczb od 0+1 do maksymalnej wartosci (liczba)
        cin>>n[i];                              // Wprowadza do tablicy kolejno liczby
    }
}

void PokazShell(int liczba, int n[])            // Funkcja sluzy do wyswietlania kolejno liczby z tablicy, przy 2 argumentach - tablica oraz miejsce.
{
    for(int i=0;i<liczba;i++)
        cout<<n[i]<<endl;                       //Wyswietla kolejno liczby.

}

void SortujShell(int a[], int ilosc)            // Funkcja sluzy do sortowania tablicy wedlug Shella
{
    int i,j , inc, temp;                        // i

    for(inc = 1; inc < ilosc ; inc = inc*3+1);  // dla wartosci inc =1 mnoz razy 3 i dodaj 1 az osiagnie wartosc ilosci.

    while(inc>0)                                // Pierwszy warunek - zmienna inc bedzie zawsze wieksza od 0.
    {
        for(i=inc;i<ilosc;i++)                  // Przypisywanie wartosci inc do zmiennej i i zwiekszanie ja do poki bedzie mniejsza od ilosc.
        {
            j=i;                                // Przypisanie wartosci i do zmiennej j
            temp = a[i];                        // Przechowanie tablicy zaleznej od zmiennej i do temp.
            while((j>= inc)&&(a[j-inc]>temp))   // Kolejny warunek bedzie sie spelnial poki zmienna j bedzie wieksza od inc a zarazem tablica a[i] mniejsza od tablicy a[j-inc]
            {
                a[j] = a[j - inc];              // Przepisana zostaje wartosc drugiej tablicy do a[j]
                j=j-inc;                        // Nastepnie j sie zmniejsza za razem o inc.
            }
            a[j] = temp;                        // Po wykonaniu 2-ego warunku tablica a[j] przyjmuje wartosc temp.
        }
        inc/=2;                                 // A wartosc inc zostaje podzielona przez dwa.
    }
}


int main(){
    int a[rozmiar], ilosc_liczb;
    do{
    cout<<"Prosze podac ilosc liczb do wprowadzenia :";
    cin>>ilosc_liczb;
    if(ilosc_liczb<=0 || ilosc_liczb>rozmiar)
        cout<<"Nalezy wprowadzic ilosc w zakresie od 0 do "<<rozmiar<<endl;
    }while(ilosc_liczb<=0 || ilosc_liczb>rozmiar);

    zbudujShell(ilosc_liczb,a);
    SortujShell(a,ilosc_liczb);
    PokazShell(ilosc_liczb,a);

}
