#import <stdio.h>
#import <locale.h>
#import <stdlib.h>
#import <string.h>
#import <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num1;
    int num2;

    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);

    printf("Digite o segundo número: ");
    scanf("%d",&num2);

    printf("\n------ OPERAÇÕES BITWISE ------\n");
    printf("\nCalculando %d & %d é igual a %d",num1,num2,num1&num2);

    printf("\nCalculando %d | %d é igual a %d",num1,num2,num1|num2);

    printf("\nCalculando %d ^ %d é igual a %d",num1,num2,num1^num2);
}
