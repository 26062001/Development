#include<stdio.h>
void CheckDisplay()
{
	char c='\0';
	if((c>=65) && (c<=91))
	{
	  printf("It is capital\n");
	}
	else
	{
		printf("It is not capital\n");
	}
}


int main()
{
	CheckDisplay();
	return 0;
}
