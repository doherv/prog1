#include <stdio.h>

int main()
{
  
  int matA[50][50];     
  int matB[50][50];
  int matR[50][50];
  int l;
  int c;
  int sm;
 
  
 printf("\n==============================================================================");
 printf("\nEsse programa multiplicara duas matrizes sendo elas, respectivamente; [2x3] e [3x2]");
 printf("\n==============================================================================\n");
 printf("\nmatriz A [ ][ ][ ] *\tmatriz B [ ][ ] =\t\t\n\t [ ][ ][ ]\t\t [ ][ ]\t\t\t\t\n\t\t\t\t [ ][ ]\n");
 printf("\n==============================================================================");
 printf("\nEntre com os valores da matriz A:");
 printf("\n==============================================================================\n\n");
 
 for (l=0;l<2;l++) 
  {
    for(c=0;c<3;c++) 
      {
        printf("matA[%d][%d]:",l+1,c+1);
        scanf("%d", &matA[l][c]);
      }
  }
  
 printf("\n==============================================================================\n");
 printf("Perfeito!! Veja como ficou:");
 printf("\n==============================================================================\n");
 printf("\nmatriz A [%d][%d][%d] *\tmatriz B [ ][ ] =\t\t\n\t [%d][%d][%d]\t\t [ ][ ]\t\t\t\t\n\t\t\t\t [ ][ ]\n", matA[0][0], matA[0][1], matA[0][2], matA[1][0], matA[1][1], matA[1][2]);
 printf("\n==============================================================================");
 printf("\nAgora entre com os valores da matriz B:");
 printf("\n==============================================================================\n");
  
  for (l=0;l<3;l++) 
    {
      for(c=0;c<2;c++) 
        {
          printf("matB[%d][%d]:", l+1, c+1);
          scanf("%d", &matB[l][c]);
        }
  }
 
 printf("\n==============================================================================");
 printf("\nmatriz A [%d][%d][%d] *\tmatriz B [%d][%d] =\t\t\n\t [%d][%d][%d]\t\t [%d][%d]\t\t\t\t\n\t\t\t\t [%d][%d]\n", matA[0][0], matA[0][1], matA[0][2], matB[0][0], matB[0][1], matA[1][0], matA[1][1], matA[1][2], matB[1][0], matB[1][1], matB[2][0], matB[2][1]);
 printf("\n==============================================================================");
 printf("\nA multiplicacao de matrizes foi realizada com sucesso!");
 printf("\n==============================================================================\n");
 
    for (l=0;l<2;l++) 
      {
        for (c=0;c<2;c++) 
          {
            for (sm=0;sm<3;sm++) 
              {
                matR[l][c] = matR[l][c] + (matA[l][sm] * matB[sm][c]); 
              }
          }
      }
  

 printf("\nmatriz A [%d][%d][%d] *\tmatriz B [%d][%d] =\t\t matriz R [%d][%d]\n\t [%d][%d][%d]\t\t [%d][%d]\t\t\t\t  [%d][%d]\n\t\t\t\t [%d][%d]\n", matA[0][0], matA[0][1], matA[0][2], matB[0][0], matB[0][1], matR[0][0], matR[0][1], matA[1][0], matA[1][1], matA[1][2], matB[1][0], matB[1][1], matR[1][0], matR[1][1], matB[2][0], matB[2][1]);
  
  
  
  
 return 0;
  
  
  
}