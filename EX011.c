#import <stdio.h>
#import <locale.h>

void main(){
    int num;
    printf("Digite um número qualquer: ");
    scanf("%d",&num);

    printf("O número que digitou é %s.",(num%2==0)?"PAR":"ÍMPAR");
}

