#import <stdio.h>
#import <locale.h>

void main(){
    printf("======= TABELA DE PREÇOS =======");
    printf("\nViagens até 200 Km\t€0,50/Km");
    printf("\nA partir de 200 Km\t€0,35/Km");
    printf("\n--------------------------------");

    float viagem;

    printf("\nDistância total da viagem em Km: ");
    scanf("%f",&viagem);

    if(viagem>=200)
    {
        printf("Uma viagem de %.1f Km custará €0,35/Km.",viagem);
        printf("\nValor total: €%.2f",viagem * 0.35);
    }

    else
    {
        printf("Uma viagem de %.1f Km custará €0,50/Km",viagem);
        printf("\nValor toral: €%.2f",viagem * 0.5);
    }
}
