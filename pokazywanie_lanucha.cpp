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
