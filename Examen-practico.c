//Version 5 examen practico 13/05/2024
#include <stdio.h>
#include <string.h>
/*Esta libreria nueva añade nuevas funciones que estan enfocadas en las cadenas*/
int SumaTotal(int Cantidad, int precio){
    return Cantidad*precio;
}
int main ()
{
    int N, producto, cant, precio,factura;
    char usuario[100], password[3];
    printf("Cual es su nombre de usuario:\n");
    fgets(usuario, sizeof(usuario), stdin);
    N=1;
    do
    {
        printf("Ingrese la contrasena: ");
        scanf("%s", password);
        if (strcmp(password, "3b2") == 0) 
        {
            /*Este comando segun lo que investigue es para comparar dos cadenas de caracter basado en el orden
            de sus caracteres, si son iguales el valor en si es 0, si son desiguales dependiendo de ambos caracteres 
            puede variar aumentando o disminuyendo un numero determinado */
            printf("Bienvenido al sistema\n");
            printf("Cuantos articulos son:");
            scanf("%d",&producto);
            for (int i = 0; i < producto; i++)
            {
                printf("Cuantos productos adquiriste del articulo %d: \n", i+1);
                scanf("%d", &cant);
                printf("Cuanto cuesta la unidad: \n");
                scanf("%d", &precio);
                factura=SumaTotal(cant, producto)+factura;
            } 
            printf("La factura es de: %d", factura);
        } 
        else
        {
            printf("Contrasena incorrecta\n");
            N++;
        }
        
    } while (N<4 && (strcmp(password, "3b2") != 0) );
    
}
