#include <stdio.h>

int main()
{
	
int x = 0;
int y = 1;
	
if( (!x || !y) && (x>y) )
	{
		printf("10");
	}
	else if( !y || (x<y) )
	{
		printf("20");
	}
	else if( y && x )
	{
		printf("30");	
	}
	printf("fim!");
	return;
	
}