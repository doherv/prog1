#include <stdio.h>

int main()
{

float soma = 0, media, av1[10];
int i;
  

  for(i=0;i<=9;i++)
    {
 
      printf("\nEntre com a av1 do aluno %d\n", i+1);
      scanf("%f", &av1[i]);
      soma = soma + av1[i];
 
    }
  

media = soma/10;
printf("\n media = %.2f", media);

printf("\n------------------------------------");
printf("\n Alunos com nota >= media");

  for(i=0;i<=0;i++)
    {
      if(av1[i] >= media)
        {
          printf("\nAluno %d -> nota = %f", i+1, av1[i]); 
        }
  
    }
  
return 0;

}