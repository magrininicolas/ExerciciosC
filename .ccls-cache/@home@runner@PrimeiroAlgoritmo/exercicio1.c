#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char nome[20], produto[20];
  float valorUnitario, total, valorParcela;
  int quantidade, parcelas;

  printf("Digite seu nome: ");
  scanf("%s", &nome);
  printf("Digite o nome do produto: ");
  scanf("%s", &produto);
  printf("Digite o valor unitario: ");
  scanf("%f", &valorUnitario);
  printf("Digite o numero de unidades: ");
  scanf("%d", &quantidade);
  printf("Digite o numero de parcelas: ");
  scanf("%d", &parcelas);

  total = quantidade * valorUnitario;
  printf("Valor total antes: %.2f", total);

  if (parcelas == 1) {
    total -= total * 0.1;
  } else if (parcelas >= 6 && parcelas <= 10) {
    total += total * 0.08;
  } else if (parcelas > 10) {
    total += total * 0.1 + 283;
  }

  valorParcela = total / (float)parcelas;

  printf("\nValor total atualizado: %.2f", total);
  printf("\nValor de cada parcela: %.2f", valorParcela);
}
