#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf_s("%d%d%d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("%d�O�̤j��\n", a);
	if (b > a&&b > c)
		printf("%d�O�̤j��\n", b);
	if (c > b&&c > a)
		printf("%d�O�̤j��\n", c);
	if (a < b && a < c)
		printf("%d�O�̤p��\n", a);
	if (b < a&&b < c)
		printf("%d�O�̤p��\n", b);
	if (c < b&&c < a)
		printf("%d�O�̤p��\n", c);
}