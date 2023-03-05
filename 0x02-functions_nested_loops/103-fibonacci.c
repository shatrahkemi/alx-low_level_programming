#include <stdio.h>
/**
 * main -finds and prints the sum of the even-valued terms
 * follwed ny new line
 * return:always 0(succes)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;
	j =1;
	k =2;
	sum =0;
	for (i =1;i <=33; ++i)
	{
		sum = sum +j;
	}
	next = j +k;
	j =k;
	k = next;
}
printf("%lu\n',sum);
return (0);
}
