/*
Napisz funkcjê, która normalnie pobiera jeden parametr, adres ³añcucha, po czym zaraz pokazuje ten ³añcuch.
Jeœli jednak podany zostanie niezerowy drugi parametr, napis ma siê pojawiæ tyle razy, ile razy dot¹d wywo³ano tê funkcjê.
Zauwa¿my, ¿e drugi parametr nie mówi, ile razy nale¿y pokazaæ napis.
U¿yj opisanej funkcji w prostym programie, który poka¿e jej dzia³anie.
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
