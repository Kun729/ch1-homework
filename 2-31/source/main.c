#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("number	square	cube\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t", i); printf("%d\t", i*i); printf("%d\n", i*i*i);
	}
}