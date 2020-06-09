#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    unsigned short int idade;
    float peso;
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos tem? ");
    scanf("%d",&idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf("%f",&peso);

    printf("\n----------<<< PROCESSANDO >>>----------");
    printf("\nMuito prazer, %s. Tens %d anos e pesa %.2fKg correto?",nome,idade,peso);
}
