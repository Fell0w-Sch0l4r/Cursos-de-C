#import <stdio.h>
#import <locale.h>

void main(){
    int n1;
    int n2;

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d",&n1);


    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d",&n2);


    if(n1 > n2)
    {
        printf("O %d é o maior.",n1);

    }

    else if(n1 < n2)
    {
        printf("O %d é o maior.",n2);
    }

    else
    {
        printf("Os números %d e %d são iguais.",n1,n2);
    }


}
