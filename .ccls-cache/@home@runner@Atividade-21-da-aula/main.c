#include <stdio.h>

int main() {
  float nota1, nota2, nota3, media;

  // Solicita ao usuário que insira as três notas
  printf("Insira as tres notas do aluno separadas por espaco: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  // Calcula a média das notas
  media = (nota1 + nota2 + nota3) / 3.0;

  // Verifica se a média é maior ou igual a 6 para determinar se o aluno está aprovado ou reprovado
  if (media >= 6.0) {
      printf("O aluno esta APROVADO com media %.1f\n", media);
  } else {
      printf("O aluno esta REPROVADO com media %.1f\n", media);
  }
  return 0;
}