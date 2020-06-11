#import <stdio.h>
#import <locale.h>
#import <time.h>

void main(){
    time_t t;
    time(&t);
    struct tm*dt;
    dt = localtime(&t);
    int anoc = dt->tm_year+1900;
    printf("Atualmente estamos no ano %d.",anoc);

    int ano;
    printf("\nEm que ano nasceu? ");
    scanf("%d",&ano);

    int idade = (dt->tm_year + 1900) - ano;
    printf("A sua idade atual é %d anos",idade);

    if(idade > 18)
    {
        printf("\nSeu alistamento foi em %d. Já se passaram %d anos.",ano + 18,anoc-(ano+18));
    }

    else if(idade<18)
    {
        printf("\nSeu alistamento será em %d. Ainda faltam %d anos.",ano+18,18-idade);
    }

    else
    {
        printf("\nFaz 18 anos exatamente em %d. Vá se alistar.",anoc);
    }
}
