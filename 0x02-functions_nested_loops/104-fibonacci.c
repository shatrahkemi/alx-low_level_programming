#include <stdio.h>
/**
 * main -fibonaacci <3
 *
 * purpose- no hardcode
 *
 * return: (success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft =2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu" ,bef);
	for (i =92; i < 99; ++i)
	{
		printf(", %lu" , aft1 +(aft2 /1));
		printf("%lu" , aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 =aft2 + bef2;
		bef2 =aft2 _bef2;
	}
	printf("\n");
	return (0);
}



