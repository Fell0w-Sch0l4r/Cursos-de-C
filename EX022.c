#import <stdio.h>
#import <time.h>
#import <locale.h>

void main(){
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);

    //printf("%d:%d:%d",data->tm_hour,data->tm_min,data->tm_sec);

    printf("=============  CINEMA ESTUDONAUTA  =============");
    printf("\nHORÁRIO DO FILME: 19H - PREÇO DO BILHETE: €7,00");
    printf("\n-----------------------------------------------");

    int hora;
    printf("\nA que horas começa o filme? ");
    scanf("%e",&hora);

    float di;
    printf("Quanto dinheiro possui? ");
    scanf("%f",&di);

    printf("Agora são %d horas.",data->tm_hour);

    if(di>=7 && data->tm_hour<=hora){
        printf("\nConsegue comprar o bilhete.");
    }

    else
    {
        printf("\nInfelizmente não conseque comprar o bilhete.");
    }
}
