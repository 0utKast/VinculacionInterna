int main()
{
    int x{ 2 }; // variable local, no linkage

    {
        int x{ 3 }; // este identificador x se refiere a un objeto diferente que el x anterior
    }

    return 0;
}