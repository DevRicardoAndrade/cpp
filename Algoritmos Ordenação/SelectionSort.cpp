#include <iostream>

int main()
{
    int lista[5] = {5, 2, 3, 7, 8};
    int n = std::size(lista);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (lista[j] < lista[min])
                min = j;
        }
        if (i != min)
        {
            int aux = lista[i];
            lista[i] = lista[min];
            lista[min] = aux;
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << lista[i] << ", ";
}
