#import <stdio.h>
#import <locale.h>
#import <string.h>

void main(){
    //com o strcmp
    /*char nome1[30];
    char nome2[30];

    printf("Primeiro nome: ");
    gets(nome1);

    printf("Segundo nome: ");
    gets(nome2);

    int a = strcmp(nome1,nome2);
    //printf("%d",a);

    char b[20];
    strcpy(b,(a > 0)?"primeiro":"segundo");

    printf("O %s nome é o maior.",b);*/

    //sem o strcmp

    char nome1[30];
    char nome2[30];

    printf("Primeiro nome: ");
    gets(nome1);

    printf("Segundo nome: ");
    gets(nome2);

    char b[30];
    strcpy(b,strlen(nome1)>strlen(nome2)?"primeiro":"segundo");

    printf("O %s nome é o maior.",b);
}
