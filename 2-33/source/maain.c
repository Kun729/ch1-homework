#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float daydrive, daygasprice, gaskm, carprice, tolls,s;
	printf("��J�C�Ѧ�p���{:");
	scanf_s("%f", &daydrive);
	printf("��J�C�[�ڨT�o����:");
	scanf_s("%f", &daygasprice);
	printf("��J�C�[�ڨT�o��p���{:");
	scanf_s("%f", &gaskm);
	printf("��J�C�Ѫ������O:");
	scanf_s("%f", &carprice);
	printf("��J�C�Ѫ��L���O:");
	scanf_s("%f", &tolls);
	s =(daydrive / gaskm)*daygasprice + carprice + tolls;
	printf("�`�@��O:%.1f��", s);
}
