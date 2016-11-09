/* programa para identificar o código referente ao caractere ASCII */


#include <stdio.h>

int main()
{
  char letra;
 
  printf("\nEntre com uma letra:\n");
  scanf("%c", &letra);
  printf("caractere = %c\ncodigo = %d\n", letra, letra);

  if( (letra>64) && (letra<91) )  
  {
    printf("A letra e maiuscula!\n");
  }
  else
  {
    printf("A letra e minuscula!\n");
  }    
  
  return 0;
 
}