#include <stdio.h>
int main ()
{
    int carta;
    printf("Que carta salio? ");
    scanf("%d", &carta);
    if (carta==2 || carta==3 || carta==4 || carta==5 ||carta==6 || carta==7 || carta==8 || carta==9)
    {
    printf("%d no es ninguna figula y tampoco es as", carta);
    }
    if (carta==1)
    {
        printf("%d es una As", carta);
    }
    if (carta==10)
    {
        printf("%d es una Sota", carta);
    }
    if (carta==11)
    {
        printf("%d es un caballo", carta);
    }
    if (carta==12)
    {
        printf("%d es un Rey", carta);
    }
    if (carta >=13)
    {
        printf("%d no es ninguna carta de la baraja", carta);
    }
    return 0;
}