#include <stdio.h>
int main ()
{
    int num, base,altura, BaseMayor;
    float area;
    printf("CALCULO DE AREAS\n================\n");
    printf("1 Calcular area de un triangulo\n2 Calcular area de un trapecio\n3 Calcular area de un rectangulo\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Para imprimir el area ingrese la base: ");
        scanf("%d", &base);
        printf("ahora ingrese la altura: ");
        scanf("%d", &altura);
        area=base*altura/2;
        printf("%.2f es el area del triangulo", area);
        break;
    case 2:
        printf("ingrese la base mayo rpara calcular el area: ");
        scanf("%d", &BaseMayor);
        printf("Para imprimir el area ingrese la base: ");
        scanf("%d", &base);
        printf("ahora ingrese la altura: ");
        scanf("%d", &altura);
        area=(BaseMayor+base)*altura/2;
        printf("el area de . es %.2f", area);
        break;
    case 3:
        printf("ingrese la base mayo rpara calcular el area: ");
        scanf("%d", &BaseMayor);
        printf("Para imprimir el area ingrese la base: ");
        scanf("%d", &base);
        area=BaseMayor*base;
        printf("el area de . es %.2f", area);
        break;
    default: 
        printf("No hay figula seleccionada");
        break;
    }
    return 0;
}