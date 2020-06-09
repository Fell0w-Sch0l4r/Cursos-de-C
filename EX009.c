#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float nota1;
    float nota2;
    char aluno[30];

    printf("Nome do aluno: ");
    gets(aluno);

    printf("Nota 1: ");
    scanf("%f",&nota1);

    printf("Nota 2: ");
    scanf("%f",&nota2);

    float media = (nota1 + nota2) / 2;

    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média de %.1f",aluno,nota1,nota2,media);

}
