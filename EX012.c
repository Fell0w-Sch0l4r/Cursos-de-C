#import <stdio.h>
#import <locale.h>

void main(){
    float nota1;
    float nota2;
    float media;

    printf("Primeira nota: ");
    scanf("%f",&nota1);

    printf("Segunda nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("A média do aluno foi %.1f",media);

    printf("\nA sua situação é %s.",(media > 5)?"APROVADO":"REPROVADO");
}
