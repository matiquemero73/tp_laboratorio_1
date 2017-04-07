#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int a, b, resultado;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero A: ");
                scanf("%d",&a);
                break;
            case 2:
                printf("Ingrese un numero B: ");
                scanf("%d",&b);
                break;
            case 3:
                suma(a,b);
                break;
            case 4:
                resta(a,b);
                break;
            case 5:
                division(a,b);
                break;
            case 6:
                multiplicacion (a,b);
                break;
            case 7:
                factorial (a);
                break;
            case 8:
                todaslasoperaciones (a,b);
                break;
            case 9:
                seguir = 'n';
                break;
        }
}
  return 0;
}
