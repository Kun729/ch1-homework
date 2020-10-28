#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf_s("%d%d%d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("%d琌程\n", a);
	if (b > a&&b > c)
		printf("%d琌程\n", b);
	if (c > b&&c > a)
		printf("%d琌程\n", c);
	if (a < b && a < c)
		printf("%d琌程\n", a);
	if (b < a&&b < c)
		printf("%d琌程\n", b);
	if (c < b&&c < a)
		printf("%d琌程\n", c);
}