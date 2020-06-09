#import <stdio.h>
#import <locale.h>

void main(){
    int num;
    int des;

    printf("Digite um número: ");
    scanf("%d",&num);

    printf("Digite o deslocamento: ");
    scanf("%d",&des);

    printf("------ OPERAÇÕES SHIF ------");

    printf("\nCalculando %d >> %d é igual a %d.",num,des,num>>des);
    printf("\nCalculando %d << %d é igual a %d.",num,des,num<<des);
}
