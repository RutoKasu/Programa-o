#include<stdio.h>
void main(){
    int quant_tapioca; 
    float valor_tapioca, dinheiro_cliente, valor_total, troco;
    valor_tapioca = 5.5;

    printf("Quantidade de tapiocas que o cliente vai comprar: ");
    scanf("%d",&quant_tapioca);

    valor_total = valor_tapioca * quant_tapioca;
    printf("\nO valor total da compra foi de: %.2f",valor_total);
    
    printf("\nQuanto o cliente deu em dinheiro: ");
    scanf("%f",&dinheiro_cliente);

    troco = dinheiro_cliente - valor_total;
    printf("\nO troco do cliente é de: %f ", troco);
    
}
