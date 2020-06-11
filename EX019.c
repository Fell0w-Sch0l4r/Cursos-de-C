#import <stdio.h>
#import <locale.h>

void main(){
    int ano;

    printf("Digite um no qualquer: ");
    scanf("%i",&ano);

    if ((ano % 4 ==0 && ano % 100 !=0) || ano % 400 == 0)
    {
        printf("O ano %d é bissexto.",ano);
    }

    else
    {
        printf("O ano %d não é bissexto.",ano);
    }
}
