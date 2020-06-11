#import <stdio.h>
#import <time.h>
#import <locale.h>

void main(){
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);

    int ano = data->tm_year + 1900;

    printf("Atualmente estamos no ano %i.",ano);

    int ano_nas;
    printf("\nEm que ano nasceu? ");
    scanf("%d",&ano_nas);

    int idade = ano - ano_nas;
    printf("Sua idde atual é %d anos.",idade);

    if(idade >=18)
    {
        printf("\nJá fez 18 anos. Espero sinceramente que tenha se alistado.");
    }

    else
    {
       printf("\nAinda não tem 18 anos. Não pode alistar-se.");
    }
}
