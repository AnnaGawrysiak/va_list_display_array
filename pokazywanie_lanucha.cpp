/*
Napisz funkcj�, kt�ra normalnie pobiera jeden parametr, adres �a�cucha, po czym zaraz pokazuje ten �a�cuch.
Je�li jednak podany zostanie niezerowy drugi parametr, napis ma si� pojawi� tyle razy, ile razy dot�d wywo�ano t� funkcj�.
Zauwa�my, �e drugi parametr nie m�wi, ile razy nale�y pokaza� napis.
U�yj opisanej funkcji w prostym programie, kt�ry poka�e jej dzia�anie.
*/
#include <iostream>
#include <stdarg.h>
#include <stdio.h>
#include <string>

using namespace std;

void show_me(char arr[], ...);

int main()
{
    char name[10] = { "lancuch" };

    show_me(name);
    show_me(name);
    show_me(name);
    show_me(name);
    show_me(name, 2);

    return 0;
}

void show_me(char arr[], ...)
{
     static int counter = 0;

     va_list arguments;

     /* Initializing arguments to store all values after arr */
     va_start ( arguments, arr );

     int x = va_arg(arguments, int);

     if (x == 0)
     {
        return;
     }


     for (int i = 0; i < counter; i++)
     {
             cout << arr << " ";
     }
     va_end ( arguments );


    cout << endl;

    counter++;
}
