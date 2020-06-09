#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    char produto[30];
    float preco;
    unsigned short int desconto;

    printf("Produto: ");
    gets(produto);

    printf("Preço de %s: €",produto);
    scanf("%f",&preco);

    printf("Desconto: (%%) ");
    scanf("%d",&desconto);

    float pro_des = preco - (preco * (desconto/100.00));

    printf("O produto %s custava €%.2f, mas com %d%% de desconto, passa a custar €%.2f.",produto,preco,desconto,pro_des);
}
