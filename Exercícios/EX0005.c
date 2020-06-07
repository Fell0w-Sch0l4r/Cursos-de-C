#import <stdio.h>
#import <time.h>
#import <stdlib.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Vou pensar em um número entre 1 a 5. Tenta adivinhar. ");
    int escolha;
    int num = rand() % 5 + 1;
    printf("\nA sua escolha?: ");
    scanf("%d",&escolha);
    printf("Eu pensei no número %d e tú no %d.",num,escolha);
}
