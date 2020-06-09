#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%i",&num);
    int dobro = num * 2;
    float ter = num / 3.0;
    printf("Analisando o número %i, o seu dobro é %i e a sua terça parte é %.2f.",num,dobro,ter);
}
