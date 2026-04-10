#include<stdio.h>

int main()
{
    float nume1=0, nume2=0, prome=0;

    do
    {
        printf("Ingrese el numero 1: "); scanf("%f",&nume1);

    }while(nume1 < 0 || nume1 > 20);

    do
    {
        printf("\nIngrese el numero 2: "); scanf("%f",&nume2);

    }while(nume2 < 0 || nume2 > 20);

    prome= (nume1+nume2)/2;

    if(prome>=11 && prome<=13.99)
    {
        printf("\nSupletorios");
        printf("\nPromedio: %.2f", prome);
    }

    else if (prome<11)
    {
        printf("\nREPROBADO");
        printf("\nPromedio: %.2f", prome);
    }
    else
    {
        printf("\nAprobado");
        printf("\nPromedio: %.2f", prome);
    }

    return 0;

}
