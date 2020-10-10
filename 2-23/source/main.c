#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf_s("%d%d%d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("%d is maxium\n", a);
	if (b > a&&b > c)
		printf("%d is maxium\n", b);
	if (c > b&&c > a)
		printf("%d is maxium\n", c);
	if (a < b && a < c)
		printf("%d is minium\n", a);
	if (b < a&&b < c)
		printf("%d is minium\n", b);
	if (c < b&&c < a)
		printf("%d is minium\n", c);
}