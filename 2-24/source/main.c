#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,n=1;
	
	while (n!=0)
	{
		scanf_s("%d", &a);
		if (a % 2 == 0)
		{
			printf("%d是偶數\n", a);
		}
		else
		{
			printf("%d是奇數\n", a);
		}
	}
}