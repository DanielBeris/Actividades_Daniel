#include <stdio.h>
int main ()
{
    int N,FN;
    do
        {
        printf("ingrese un numero\n");
        scanf("%d", &N);
        if (N==0)
        {
            printf("operacion finalizada por la intriduccion de un 0\n");
        }
        else
        {
            FN=FN+N;
        }
    }
    while (N!=0);
    printf("El resultado es %d", FN);
}

