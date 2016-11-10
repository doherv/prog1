/* Faça um programa para ler um nome, av1 e av2 */


#include <stdio.h>

int main()
{
  
  char nome[10];
  float av1;
  float av2;
  
  printf("Diga seu nome:\n");
  scanf("%s", nome);
  printf("Digite sua nota da AV1:\n");
  scanf("%f", &av1);
  printf("Digite sua nota da AV2:\n");
  scanf("%f", &av2);
  
  printf("Aluno: %s\nNota AV1: %.1f\nNota AV2: %.1f\nMedia: %.1f\n", nome, av1, av2, (av1+av2)/2);
  
 
  
  return 0;
  
}