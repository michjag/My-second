//Największa liczba z tablicy - szablon funkcji. 5/394
#include <iostream>

using namespace std;

template <typename T>
T max (T a[], int n);

template <typename T>
void show (T a[], int n);

int main()
{
    int tablica_intow[5] = {4,23,143,29,5};
    double tablica_double[5] = {1.1, 645.2, 345.3, 999.4, 5.5};
    float tablica_float[6] = {231.223, 4345.3, 342.2, 2.2, 432.43, 435.644};
    
int powrot_int = max (tablica_intow, 5);
cout<<"return int: "<<powrot_int<<endl;
double powrot_double = max (tablica_double, 5);
cout<<"return double: "<<powrot_double<<endl;
float powrot_float = max (tablica_float, 6);
cout<<"return float: "<<powrot_float<<endl;

// show (tablica_double, 5);
return 0;
}

template <typename T>
T max (T a[], int n)
{
    T najwiekszy;
    for (int i = 0; i < n; i++)
    {
     if( a[i] > najwiekszy)
         najwiekszy = a[i];   
    }
    
   return najwiekszy; 
}

        
template <typename T>
void show (T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< i + 1<<" = "<<a[i]<<endl;
    }
}
