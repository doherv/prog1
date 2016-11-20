#include <stdio.h>

int main()
{

int origem;
int destino;
float preco[3][3] = {{0.00, 150.00, 300.00},
                    {160.00, 0.00 ,180.00},
                    {280.00, 175.00, 0.00}};


printf("\n==========================================================\n");
printf("Ola, meu nome e Vitor. Informe o local de origem da viagem:\n");
printf("1- Rio\n2- SP\n3- SSA\n");
scanf("%d", &origem);
  
  while((origem != 1) && (origem !=2) && (origem !=3))
    {
      printf("Opcao invalida! Por favor, informe o numero correspondente ao local de origem:\n");
      printf("1- Rio\n2- SP\n3- SSA\n");  
      scanf("%d", &origem);
    }
  
printf("============================================================\n");
printf("Perfeito. Informe o destino da viagem:\n");
printf("1- Rio\n2- SP\n3- SSA\n");
scanf("%d", &destino);
  
    while((destino != 1) && (destino !=2) && (destino !=3))
     {
        printf("Opcao invalida! Por favor, informe o numero correspondente ao local de destino:\n");
        printf("1- Rio\n2- SP\n3- SSA\n");  
        scanf("%d", &destino);
     }
    while(destino==origem)
     {
        printf("Opcao invalida! Origem e destino nao podem coincidir! Qual seu destino?\n");
        printf("1- Rio\n2- SP\n3- SSA\n");
        scanf("%d", &destino);
     }

printf("============================================================\n");
printf("O preço da passagem e:\nR$ %.2f ou US$ %.2f\n", preco[origem-1][destino-1], (preco[origem-1][destino-1]*3.40));
printf("============================================================\n");

  
return 0;

}