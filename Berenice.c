#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A=7.50,B=8.69,C=5.00,D=4.50,E=3.25;
    int a,b,c,d,e;
    char tipo;
    printf("ola berenice, selecione um entre os produtos\n");
    printf("\n codigo  \t\t item           \t\t valor\n");
    printf("   a=      \t\t pao de forma   \t\t R$ 7,50 \n");
    printf("   b=      \t\t pao de centeio \t\t R$ 8,69 \n");
    printf("   c=      \t\t pao de milho   \t\t R$ 5,00 \n");
    printf("   d=      \t\t sonho          \t\t R$ 4,50 \n");
    printf("   e=      \t\t tubaina        \t\t R$ 3.25 \n");
    printf("selecione um dos produtos\n");
    scanf(" %c",&tipo);

    return 0;
}
