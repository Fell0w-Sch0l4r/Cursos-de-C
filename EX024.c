#import <stdio.h>
#import <locale.h>

void main(){
    printf("Digite dois números para colocar-los em ordem crescente.");

    int n1;
    int n2;

    printf("\nNúmero 1: ");
    scanf("%d",&n1);

    printf("Número 2: ");
    scanf("%d",&n2);

    if(n1 < n2)
    {
        printf("Os números em ordem são %d e %d",n1,n2);
    }
    else if(n2 < n1)
    {
        printf("Os números em ordem são %d e %d",n2,n1);
    }
    else
    {
        printf("Os números são iguais.");
    }
}
