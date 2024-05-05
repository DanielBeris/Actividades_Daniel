#include <stdio.h>
int main ()
{
    int N,intento;
    char usuario[100];
    printf("Cual es su nombre de usuario:\n");
    fgets(usuario, sizeof(usuario), stdin);
    N=1;
    do
    {
        printf("Ingrese la contrasena: ");
        scanf("%d", &intento);
        if (intento==1234)
        {
            printf("acceso permitido\n");
        }
        else
        {
            printf("acceso denegado\n");
            printf("Llevas %d intento\n", N);
        }
        N=N+1;
    } while (intento!=1234 && N<4);
    if (intento==1234)
    {
        printf("Bienvenido %s", usuario);
    }
    return 0;
}