#include<stdio.h>
void main(){
    short int idade;
    int montante;
    long int n_conta;

    printf("Qual sua idade: ");
    scanf("%hd",&idade);
    printf("Qual seu montante: ");
    scanf("%d",&montante);
    printf("Qual o numero da conta: ");
    scanf("%ld",&n_conta);

    printf("A sua idade é: %hd\n",idade);
    printf("O seu montante é R$ %d\n", montante);
    printf("O número da sua conta é %ld\n",n_conta);

}