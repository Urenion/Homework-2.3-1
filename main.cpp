#include <stdio.h>

main() 
{
	int login, password;
	printf("Write login ");
	scanf("%i",&login);
	printf("Write password ");
	scanf("%i",&password);
	
	if(((login==111)&&(password==111))||((login==222)&&(password==222)))
	{
		printf("OK");
	}
	else
	{
		printf("EROR");
	}
}
