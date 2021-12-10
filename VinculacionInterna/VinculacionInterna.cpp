#include <iostream>

static int g_x{ 3 }; // este interno g_x solo es accesible desde dentro de este archivo

int main()
{
    std::cout << g_x << '\n'; // usa el g_x de VinculacionInterna, imprime 3

    return 0;
}










/*static int g_x; // globales no-constant tienen vinculación externa predeterminada, pero podemos darles vinculación interna usando la palabra clave static

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