/*Un programa que solicite 10 numeros positivos, mostrara la suma el mayor y el menor con una funcion repetitiva y dos variables de control*/
#include <stdio.h>
int main ()
{
    int N[10];
    int FN;
    int Mayor, Menor;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el digito\n", i);
        scanf("%d", &N[i]);
        FN=FN+N[i];
        if (Mayor<N[i])
        {
            Mayor=N[i];
        }
        if (Menor>N[i])
        {
            Menor=N[i];
        }
    }
    printf("La suma es de %d\n", FN);
    printf("El mayor es: %d\n", Mayor);
    printf("el menor es: %d\n", Menor);
}