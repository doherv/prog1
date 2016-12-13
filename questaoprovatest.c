#include <stdio.h>

int main()
{

int n, ok;
float ms;

printf("Digite um numero:");
scanf("%d", &n);

ms = n *(n-1);

for(ok=n-2;ok>=1;ok--)
{
ms = ms*ok;
   printf("%d\n", ok);
  printf("%f\n", ms);
}

  printf("\nO fatorial do numero %d e igual a %f\n", n, ms);
  
  return 0;
  
}
