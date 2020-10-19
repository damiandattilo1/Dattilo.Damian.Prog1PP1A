#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);


int main()
{
    float precio = 100;
    float precioConDescuento;

    precioConDescuento = aplicarDescuento(precio);
    printf("%.2f\n\n", precioConDescuento);

    return 0;
}

float aplicarDescuento(float precio)
{
    float descuento;
    float precioFinal;


    descuento = ((5*precio)/100);

    precioFinal = precio - descuento;

    return precioFinal;
}

