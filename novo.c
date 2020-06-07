#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char re[30];
    printf("Digite o seu nome: ");
    setlocale(LC_ALL,"Portuguese");
    gets(re);
    printf("O seu nome é %s",re);
}
