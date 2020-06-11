#import <stdio.h>
#import <locale.h>

void main(){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);

    if(num > 0){
        printf("O inverso de %d é igual a %.4f",num,1 / (float)num);
    }

    else
    {
        printf("O oposto de %d é igual a %d",num,-num);
    }
}
