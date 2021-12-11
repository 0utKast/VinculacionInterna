/*#include <iostream>

int sumar(int x, int y); // definición anticipada para la función sumar

int main()
{
    std::cout << sumar(3, 4) << '\n';

    return 0;
}*/



































/*#include <iostream>
 int g_x{ 3 }; // este interno g_x solo es accesible desde dentro de este archivo

int main()
{
    std::cout << g_x << '\n'; // usa el g_x de VinculacionInterna, imprime 3

    return 0;
}*/






































// Definiciones de variables globales internas:
static int g_x;          // define una variable global interna no inicializada (inicializada a cero predeterminado)
static int g_x{ 1 };     // define una variable global interna inicializada

const int g_y{ 2 };     // define una variable global const inicializada
constexpr int g_y{ 3 }; // define una variable global constexpr inicializada

// Definiciones funciones internas:
static int foo() {};     // define función interna









































/*static int g_x; // globales no-constant tienen vinculación externa predeterminada, 
                //pero podemos darles vinculación interna usando la palabra clave static

const int g_y{ 1 }; // globales const tienen vinculación interna predeterminada
constexpr int g_z{ 2 }; // globales constexpr tiene vinculación interna predeterminada

int main()
{
    return 0;
}*/
















/*int main()
{
    int x{ 2 }; // variable local, no linkage

    {
        int x{ 3 }; // este identificador x se refiere a un objeto diferente que el x anterior
    }

    return 0;
}*/







