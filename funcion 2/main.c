#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char v[], char caracter);

int main()
{
    char v[20] = {"Hola que tal"};
    int cantidad;

    cantidad = contarCaracteres(v, 'a');
    printf("La letra a aparece %d veces\n\n", cantidad);
    return 0;
}

int contarCaracteres(char v[], char caracter)
{
    int cantidad=0;

    for(int i=0; v[i]!='\0'; i++)
    {
        if(v[i] == caracter);
        {
            cantidad++;
        }
    }

    return cantidad;
}
