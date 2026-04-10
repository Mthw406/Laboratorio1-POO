#include<stdio.h>

int main()
{
    float num1=0, num2=0, prome=0;

    do
    {
        printf("Ingrese el numero 1: "); scanf("%f",&num1);

    }while(num1 < 0 || num1 > 20);

    do
    {
        printf("\nIngrese el numero 2: "); scanf("%f",&num2);

    }while(num2 < 0 || num2 > 20);

    prome= (num1+num2)/2;

    if(prome>=11 && prome<=13.99)
    {
        printf("\nSupletorios");
        printf("\nPROMEDIO: %.2f", prome);
    }

    else if (prome<11)
    {
        printf("\nREPROBADO");
        printf("\nPROMEDIO: %.2f", prome);
    }
    else
    {
        printf("\nAprobado");
        printf("\nPromedio: %.2f", prome);
    }

    return 0;

}
