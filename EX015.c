#import <stdio.h>
#import <time.h>
#import <locale.h>
#import <string.h>
#import <stdlib.h>

void main(){
    float nota1;
    float nota2;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    float media = (nota1 + nota2) / 2;

    printf("-----------------------------------------\n");

    if (media > 7) {
        printf("MUITOS PARABÉNS! ");
    }

    printf("A sua média foi %.2f",media);
    printf("\n-----------------------------------------");
}
