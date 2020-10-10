#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float daydrive, daygasprice, gaskm, carprice, tolls,s;
	printf("輸入每天行駛里程:");
	scanf_s("%f", &daydrive);
	printf("輸入每加侖汽油價格:");
	scanf_s("%f", &daygasprice);
	printf("輸入每加侖汽油行駛里程:");
	scanf_s("%f", &gaskm);
	printf("輸入每天的停車費:");
	scanf_s("%f", &carprice);
	printf("輸入每天的過路費:");
	scanf_s("%f", &tolls);
	s =(daydrive / gaskm)*daygasprice + carprice + tolls;
	printf("總共花費:%.1f元", s);
}
