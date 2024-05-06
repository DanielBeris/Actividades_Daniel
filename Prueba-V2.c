#include <stdio.h>
int main ()
{
    int i;
    int N[10];
    int FN;
    int Mayor, Menor;
    i=0;
    while (i<10)
    {
        i++;
        printf("introduzca el numero: \n");
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
    return 0;
}