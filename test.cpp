#include <iostream>

using namespace std;

int main()
{

    //****************Zadanie 1

    int n;

    cout<<"\n***********Zadanie 2.1.1***********\n";
    cout<<"Prosze podac liczbe: ";
    cin>>n;
    cout<<"\n----\n";
    cout<<"Pierwsza czesc: liczby wypisane od 1 do wartosci uzytkownika.\n";

    for(int i = 1; i <= n; i++)
        cout<<i<<endl;

    cout<<"\n----\n";
    cout<<"Druga czesc: liczby wypisane od wartosci uzytkownika do 1.\n";

    for(int i = n; i >= 1; i--)
        cout<<i<<endl;

    cout<<"\n----\n";
    cout<<"Trzecia czesc: liczby wypisane to wielokrotnosci liczy 3 mniejsze od warosci uzytkownika.\n";

    int x = 1;
    int multiples = n%3;

    if(multiples == 0)
        do
        {
            x*=3;
            cout << x << " ";
        }
        while(x<n);
    else
        cout<<"Podana liczba nie ma wielokrotnosci liczby 3.\n";

    //**********************Zadanie 2

    int X;
    int sum = 0;

    cout<<"\n***********Zadanie 2.1.2***********\n";
    cout<<"Prosze wprowadzic dodatnia liczbe: X = ";
    cin>>X;
    cout<<"\n----\n";

    if(X>0)
    {
        for (int i = 1 ; i <= X ; i++)
            sum += i;
            cout<<"Suma wszystkich liczb calkowitych od 1 do wprowadzonej wartosci rowna sie: "<<sum<<" !!!";
    }
    else
        cout<<"Liczba nie jest dodatnia. Program nie wykonal dzialania. ";
        cout<<"\n----\n";

    //***********************Zadanie 3

    int i;

    cout<<"\n***********Zadanie 2.1.3***********\n";
    cout<<"Ponizej znajduje sie fragment tablicy ASCII zawierajacy znaki od 40 do 125!!!\n";
    cout<<"\n----\n";
    for(int i=40; i<=125; i++)
        cout<<i<<": "<< (char)i <<"\t";
        cout.width(8);

    cout<<"\n----\n";

    //**********************Zadanie 4

    double incr = 1.5;
    double lvl;
    int year;


    cout<<"\n***********Zadanie 2.1.4***********\n";
    cout<<"Prosze podac dla ilu lat powinna zostac obliczona roznica poziomu morzu (przedzial od 2 lat do 25): R = ";
    cin>>year;
    cout<<"\n----\n";
    cout<<"Wartosc o jaka podnoscic sie bedzie morze: ";


    for( int i = 2; i <= year; i++)
    {
        lvl = incr * year;
        cout<<i<<": "<<lvl<<endl;
    }

    //**********************Zadanie 5

    int minNo;
    int maxNo;
    int number;

     cout<<"\n***********Zadanie 2.1.5***********\n";
     cout<<"Podaj ciag liczb calkowitych (liczby musza byc oddzielone spacja), wpis konczac liczba -99 i klikajac Enter: ";
     cin>>number;
     cout<<"\n----\n";
     minNo = maxNo = number;


     do
     {
         cin>>number;

         if(number > maxNo)
         {
             maxNo = number;
         }
         if(number != -99)
         {
             if(number < minNo)
             {
                 minNo = number;
             }
         }
     }
     while (number != -99);

     cout<<"Maksymalna liczba podana przez uzytkownika to: \n";
     cout<<maxNo;
     cout<<"\nMinimalna liczba podana przez uzytkownika to: \n";
     cout<<minNo;
     cout<<"\n----\n";

     //************************Zadanie 6



    return 0;


}
