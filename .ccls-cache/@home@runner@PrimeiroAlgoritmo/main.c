#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char nome[20];
  float salario, salarioantigo;
  int idade, nasceu;

  printf("Qual o seu nome? ");
  scanf("%s", &nome);
  printf("Digite seu salário: ");
  scanf("%f", &salario);
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("\n");
  printf("\tFuncionario: %s tem %d anos de idade", nome, idade);
  nasceu = 2023 - idade;

  if (idade > 5)
    &&(idade < 7) { printf("\n Funcionario muito novo!!"); }
  else {
    if (idade < 18) {
      salarioantigo = salario;
      salario += salario * 0.05;
    } else {
      salarioantigo = salario;
      salario += salario * 0.2;
    }
    printf("\n\t%s, o seu salário passou de %.2f para %.2f", nome,
           salarioantigo, salario);

  idade > 8 ? salario= : salario
  }

  return 0;
}

/*
  %s (char)
  %d e %i (int)
  %f (float)
  %c (char sem tamanho definido)
  \t (espaçamento no prompt)
*/