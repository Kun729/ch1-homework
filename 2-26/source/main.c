#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b, n = 1;
	while (n != 0)
	{
		scanf_s("%d%d", &a, &b);
		if (a%b == 0)
		{
			printf("%d�O%d������\n",a, b);
		}
		else
		{
			printf("%d���O%d������\n", a, b);
		}
	}
}