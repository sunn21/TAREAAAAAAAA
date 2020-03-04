#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primermes, determinar;
    printf("Bienvenido\n");
    printf("Digite cual fue el primer mes en el cual se compreron palomitas grandes del 1-4\n");
    scanf("%d",&primermes);
    printf("¿Qué mes desea calcular?");
    scanf("%d",&determinar);

    if (primermes==4)
    {
        printf("Opcion 4");


        switch(determinar)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf("nada");
        break;
         case 2:
         case 6:
         case 10:
            printf("medianas");
        break;
         case 4:
         case 8:
         case 12:
            printf("grandes");
        break;
        }


    }
if (primermes==3)
    {
        printf("Opcion 3");
        switch(determinar)
        {
          case 1:
          case 3:
          case 5:
          case 7:
          case 9:
          case 11:
            printf("medianas");
        break;
          case 2:
          case 6:
          case 10:
            printf("nada");
        break;
        case 4:
        case 8:
        case 12:
            printf("grandes");
        break;
        }
    }

    if (primermes==2)
    {
        printf("Opcion 2");
        switch(determinar)
        {
          case 1:
          case 3:
          case 5:
          case 7:
          case 9:
          case 11:
            printf("nada");
        break;
          case 2:
          case 6:
          case 10:
            printf("grandes");
        break;
        case 4:
        case 8:
        case 12:
            printf("medianas");
        break;
        }

    }


    if (primermes==1)
    {
          printf("Opcion 1");
        switch(determinar)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf("palomitas grandes");
        break;
        case 2:
        case 6:
        case 10:
            printf("nada");
        break;
        case 4:
        case 8:
        case 12:
            printf("nada");
        break;
        }





    }
    return 0;
}
