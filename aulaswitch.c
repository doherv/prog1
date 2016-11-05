#include <stdio.h>
 
int main()
{
     
    int operacao = 0;
    int sinal = 0;
    int numero1 = 0;
    int numero2 = 0;
    int game = 1;
 
do
{
    
    printf("Qual operacao deseja?\n 1- adicao\n 2- subtracao\n 3- multiplicao\n 4- divisao\n");
    scanf("%d", &operacao);
     
    switch(operacao)
    {
                    case 1:
                    operacao = 1;
                    break;
                     
                    case 2:
                    operacao = 2;
                    break;
                     
                    case 3:
                    operacao = 3;
                    break;
                     
                    case 4:
                    operacao = 4;
                    break;
                     
                    default:
                    printf("Opcao invalida!\n");
                    break;
    }
     
    printf("Perfeito. Agora entre com um numero:\n");
    scanf("%d", &numero1);
    printf("Entre com outro numero:\n");
    scanf("%d", &numero2);
     
    if(operacao == 1)
    {
                printf("%d + %d = %d\n", numero1, numero2, numero1+numero2);
                printf("Deseja continuar?\n 1- Sim\n 2- Nao\n");
                scanf("%d", &game);
    }
    else if(operacao == 2)
    {
                printf("%d - %d = %d\n", numero1, numero2, numero1-numero2);
                printf("Deseja continuar?\n 1- Sim\n 2- Nao\n");
                scanf("%d", &game);
    }
    else if(operacao == 3)
    {
                printf("%d * %d = %d\n", numero1, numero2, numero1*numero2);
                printf("Deseja continuar?\n 1- Sim\n 2- Nao\n");
                scanf("%d", &game);
    }
    else if(operacao == 4)
    {
                printf("%d / %d = %d\n", numero1, numero2, numero1/numero2);
                printf("Deseja continuar?\n 1- Sim\n 2- Nao\n");
                scanf("%d", &game);
    }           
          
}while(game==1);
 
if(game==2)
{
game = 0;
}
 
system("pause");
return 0;
 
}