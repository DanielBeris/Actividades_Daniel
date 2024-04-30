#include <stdio.h>
int main ()
{
    int carta;
    printf("Que carta es ");
    scanf("%d", &carta);
    switch (carta)
    {
    case 1:printf("Es un As");
        break;
    case 10:printf("es una sota");
        break;
    case 11:printf("es un caballo");
        break;
    case 12:printf("es un rey");
        break;
    case 2:printf("No es ni figura ni es un as");
        break;
    case 3:printf("No es ni figura ni es un as");
        break;
    case 4:printf("No es ni figura ni es un as");
        break;
    case 5:printf("No es ni figura ni es un as");
        break;
    case 6:printf("No es ni figura ni es un as");
        break;
    case 7:printf("No es ni figura ni es un as");
        break;
    case 8:printf("No es ni figura ni es un as");
        break;
    case 9:printf("No es ni figura ni es un as");
        break;
    default:printf("no es de la baraja ");
        break;
    }
}