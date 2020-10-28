#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float daydrive, daygasprice, gaskm, carprice, tolls, s;
	printf("輸入一整天的總里程數:");
	scanf_s("%f", &daydrive);
	printf("輸入汽油一公升/加侖價格:");
	scanf_s("%f", &daygasprice);
	printf("輸入均一公升/加侖能行駛多少公里:");
	scanf_s("%f", &gaskm);
	printf("輸入一天的停車費:");
	scanf_s("%f", &carprice);
	printf("輸入一天的通行費(過路費):");
	scanf_s("%f", &tolls);
	s = (daydrive / gaskm)*daygasprice + carprice + tolls;
	printf("總共花費:%.2f元", s);
}