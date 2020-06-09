#import <stdio.h>
#import <locale.h>

void main(){
    char letra;
    printf("Digite uma letra: ");
    letra=getchar();
    char de = letra + 1;
    char an = letra - 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c",letra,an,de);
}
