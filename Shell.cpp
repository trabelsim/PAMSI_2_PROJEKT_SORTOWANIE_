#include <iostream>
#define rozmiar 100
using namespace std;

void zbudujShell (int liczba, int n[])
{

    for(int i=0;i<liczba;i++)
    {
        cout<<"Wprowadz liczbe"<<i+1<<" : ";
        cin>>n[i];
    }
}

void PokazShell(int liczba, int n[])
{
    for(int i=0;i<liczba;i++)
        cout<<n[i]<<endl;

}

void SortujShell(int a[], int ilosc)
{
    int i,j , inc, temp;

    for(inc = 1; inc < ilosc ; inc = inc*3+1);

    while(inc>0)
    {
        for(i=inc;i<ilosc;i++)
        {
            j=i;
            temp = a[i];
            while((j>= inc)&&(a[j-inc]>temp))
            {
                a[j] = a[j - inc];
                j=j-inc;
            }
            a[j] = temp;
        }
        inc/=2;
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
