#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A=7.50,B=8.69,C=5.00,D=4.50,E=3.25,total,quantidade;
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
    getchar();
    printf("agora digite quantos produtos vc deseja vender\n");
    scanf("%f",&quantidade);
    getchar();
    switch(tipo){
    case 'a':
    total = A * quantidade;
    printf("o valor total dessa compra e %.2f",total);
    break;
    case 'b':
    total = B * quantidade;
    printf("o valor total dessa compra e %.2f",total);
    break;
    case 'c':
    total = C * quantidade;
    printf("o valor total dessa compra e %.2f",total);
    break;
    case 'd':
    total = D * quantidade;
    printf("o valor total dessa compra e %.2f",total);
    break;
    case 'e':
    total = E * quantidade;
    printf("o valor total dessa compra e %.2f",total);
    break;
    default:
    printf("codigo invalido");
    }
    return 0;
}
