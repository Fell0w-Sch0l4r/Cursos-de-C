#include <stdio.h>

void main(){
    printf("Digite um número e direi-lhe se é positivo, negativo ou nulo.");

    int num;
    printf("\nDigite o número: ");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("O número %d é positivo.",num);
    }
    else if(num < 0)
    {
        printf("O número %d é negativo.",num);
    }
    else{
        printf("O número é nulo");
    }
}
