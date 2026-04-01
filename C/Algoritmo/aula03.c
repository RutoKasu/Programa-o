#include<stdio.h>
#include<stdlib.h>

void main(){
  int i = 0;
  int escolha;
  float saldo = 1000;
  float deposito;
  while (i == 0) {
    printf("\nJogo do trigrinho");
    printf("\n[1] Apostar\n[2] Adicionar saldo\n[3] Retirar saldo\n[0] Sair");
    printf("\nescolha uma das opções: ");
    scanf("%d",&escolha);
      switch (escolha) {
        case 1:
          printf("\n------------------------------\n------------------------------");
          printf("\n     [JOGO DO TIGRINHO]");
          printf("\n------------------------------\n------------------------------");
          break;
        case 2:
          printf("\n------------------------------\n------------------------------");
          printf("\n     [DEPOSITO DE SALDO]");
          printf("\n------------------------------\n------------------------------");
          printf("\nQuanto você quer depositar: ");
          scanf("%f",&deposito);
          saldo += deposito;
          printf("\n------------------------------\n------------------------------");
          printf("\nO valor do seu saldo é: %2.f",saldo);
          break;
        case 0:
          printf("\nPrograma finalizado!");
          exit(1);
          
        default:
          printf("\nInformação incorreta!");
      }
  }
}
