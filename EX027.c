#import <stdio.h>
#import <locale.h>

void main(){
    printf("Digite trêz números e eu colocar-los-ei em ordem.");

    int n1;
    int n2;
    int n3;

    printf("\nPrimeiro número: ");
    scanf("%d",&n1);

    printf("Segundo número: ");
    scanf("%d",&n2);

    printf("Terceiro número: ");
    scanf("%d",&n3);

    if(n1>n2 && n2>n3)
    {
        printf("Maior: %d",n1);
        printf("\nIntermediário: %d",n2);
        printf("\nMenor: %d",n3);
    }

    else if(n1>n3 && n3>n2)
    {
        printf("Maior: %d",n1);
        printf("\nIntermediário: %d",n3);
        printf("\nMenor: %d",n2);
    }

    else if(n2>n1 && n1>n3)
    {
        printf("Maior: %d",n2);
        printf("\nIntermediário: %d",n1);
        printf("\nMenor: %d",n3);
    }

    else if(n2>n3 && n3>n1)
    {
        printf("Maior: %d",n2);
        printf("\nIntermediário: %d",n3);
        printf("\nMenor: %d",n1);
    }

    else if(n3>n1 && n1>n2)
    {
        printf("Maior: %d",n3);
        printf("\nIntermediário: %d",n1);
        printf("\nMenor: %d",n2);
    }

    else
    {
        printf("Maior: %d",n3);
        printf("\nIntermediário: %d",n2);
        printf("\nMenor: %d",n1);
    }
}




