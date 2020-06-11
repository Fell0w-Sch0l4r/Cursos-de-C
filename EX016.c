#import <stdio.h>
#import <locale.h>
#import <stdlib.h>
#import <time.h>
#import <string.h>

void main(){
    float compra;

    printf("Qual foi o valor total das compras? €");
    scanf("%f",&compra);

    printf("------------------------------");
    printf("\nComprou €%.2f na nossa loja.\n",compra);

    if (compra > 500){
        printf("========= ATENÇÃO ===========");
        printf("\nPor fazer mais de €500 em compras, receberá €%.2f de desconto.",compra*0.1);
        printf("\nO valor a ser pago será €%.2f! ",compra - compra*0.1);
    }

    printf("Volte Sempre!");
    printf("\n------------------------------");
}
