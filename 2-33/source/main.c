#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float daydrive, daygasprice, gaskm, carprice, tolls, s;
	printf("��J�@��Ѫ��`���{��:");
	scanf_s("%f", &daydrive);
	printf("��J�T�o�@����/�[�ڻ���:");
	scanf_s("%f", &daygasprice);
	printf("��J���@����/�[�گ��p�h�֤���:");
	scanf_s("%f", &gaskm);
	printf("��J�@�Ѫ������O:");
	scanf_s("%f", &carprice);
	printf("��J�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &tolls);
	s = (daydrive / gaskm)*daygasprice + carprice + tolls;
	printf("�`�@��O:%.2f��", s);
}