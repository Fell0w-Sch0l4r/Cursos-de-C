#import <stdio.h>
#import <locale.h>
#import <time.h>

void main(){
    time_t t;
    time(&t);
    struct tm*datas;
    datas = localtime(&t);

    int ano = datas->tm_year + 1900;

    int ano_nas;
    printf("Em que ano nasceu? ");
    scanf("%d",&ano_nas);

    int idade = ano - ano_nas;

    printf("\n------------------------");
    printf("\nTem %d anos, certo?",idade);
    printf("\nSeja bem-vindo(a) ao Banco Estudonauta!");

    if (idade > 65) {
        printf("\n=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===");
    }
    printf("\n------------------------");
}
