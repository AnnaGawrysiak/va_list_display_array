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

static int counter = 0;

template <typename T>
void show_me(T t)
{
    std::cout << t << std::endl;
    counter++;
}

template<typename T1, typename T2>
void show_me(T1 t, T2 arg)
{
    if (arg != 0)
    {
        for (int i = 0; i < counter; i++)
         {
                 std::cout << t << " ";
         };

    }

     counter++;

}

//void show_me(char arr[], ...);

int main()
{
    char name[10] = { "lancuch" };

    show_me(name);
    show_me(name);
    show_me(name);
    show_me(name);
    show_me(name, 1);

    return 0;
}

/*void show_me(char arr[], ...)
{
    if ()
      cout << arr << " ";
      return;

     for (int i = 0; i < counter; i++)
     {
             cout << arr << " ";
     }


    counter++;
}
*/
