#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");

    char nome1[30];
    char sexo1;
    float nota1;
    printf("Cadastrando a primeira pessoa: ");
    printf("\n------------------------------");

    printf("\nNOME: ");
    gets(nome1);

    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1=getchar();

    printf("NOTA: ");
    scanf("%f",&nota1);

    char nome2[30];
    char sexo2;
    float nota2;

    printf("\nCadastrando a segunda pessoa: ");
    printf("\n------------------------------");

    printf("\nNOME: ");
    fflush(stdin);
    gets(nome2);

    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo2=getchar();

    printf("NOTA: ");
    scanf("%f",&nota2);

    char nome3[30];
    char sexo3;
    float nota3;

    printf("\nCadastrando a terceira pessoa: ");
    printf("\n--------------------------------");

    printf("\nNOME: ");
    fflush(stdin);
    gets(nome3);

    printf("SEXO [M/F]: ");
    sexo3=getchar();

    printf("NOTA: ");
    scanf("%f",&nota3);

    printf("\nListagem Completa");
    printf("\n-----------------------------------");
    printf("\nNOME\t\t\tSEXO  NOTA");

    printf("\n%-24s %c %7.1f",nome1,sexo1,nota1);
    printf("\n%-24s %c %7.1f",nome2,sexo2,nota2);
    printf("\n%-24s %c %7.1f",nome3,sexo3,nota3);

    printf("\n-----------------------------------");
}
