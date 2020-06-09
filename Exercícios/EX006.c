#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    int su = num + 1;
    int an = num - 1;
    printf("Analisando o número %d, o seu antecessor é %d e o seu sucessor é %d.",num,an,su);
}
