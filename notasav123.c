#include <stdio.h>

int main()
{

int i, j, mat, media, aav, bav, programat = 1;
float notas[4][3];
  

for(i=0;i<=3;i++)
{
  for (j=0;j<=2;j++)
  {
    printf("\nEntre com a av%d do aluno %d : ",j+1, i+1);
    scanf("%f", &notas[i][j]);
  }
}


//gerar relatorio


  
  
for(i=0;i<4;i++)
{
  printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f", i+1, notas[i][0], notas[i][1], notas[i][2]);  
}

printf("\n-------------------------------------\n\n");
  
//gerar AV1

printf("\n\nResultado do Semestre");
printf("\n-------------------------------------");
printf("\nNome\t\tAV1");
printf("\n-------------------------------------");
  
for(i=0;i<4;i++)
{
  printf("\nAluno %d\t\t%.2f", i+1, notas[i][0]);  
}

printf("\n-------------------------------------\n\n");
 
//Pedir matricula para todas as notas

while(programat==1)
{
printf("Entre com a matricula : ");
scanf("%d", &mat);

printf("\n\nResultado do Semestre");
printf("\n-------------------------------------");
printf("\nNome\t\tAV1\tAV2\tAV3");
printf("\n-------------------------------------");
  

  if( (notas[mat-1][0] > notas[mat-1][1]) && (notas[mat-1][0] > notas[mat-1][2]) )
  {
    aav = notas[mat-1][0];
  }
  else if( (notas[mat-1][1] > notas[mat-1][0]) && (notas[mat-1][1] > notas[mat-1][2]) )
  {
    aav = notas[mat-1][1];
  }
  else
  {
    aav = notas[mat-1][2];
  }
  
    if( (notas[mat-1][0] > notas[mat-1][1]) && (notas[mat-1][0] > notas[mat-1][2]) )
  {
    bav = notas[mat-1][0];
  }
  else if( (notas[mat-1][1] > notas[mat-1][0]) && (notas[mat-1][1] > notas[mat-1][2]) )
  {
    bav = notas[mat-1][1];
  }
  else
  {
    bav = notas[mat-1][2];
  }
  
media = (aav + bav)/2;
  
 if(media >= 6)
 {
   printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f\tAPROVADO", mat, notas[mat-1][0], notas[mat-1][1], notas[mat-1][2]);
   printf("\nDeseja consultar nova matricula?");
   printf("\n1- SIM   0- NAO");
   scanf("%d", &programat);
 }
 else
 {
   printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f\tREPROVADO", mat, notas[mat-1][0], notas[mat-1][1], notas[mat-1][2]);
   printf("\nDeseja consultar nova matricula?");
   printf("\n1- SIM   0- NAO");
   scanf("%d", &programat);
 }
  
printf("\n-------------------------------------\n");
}


  return 0;
  
}