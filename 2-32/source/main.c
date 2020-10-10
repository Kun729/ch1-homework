#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight, BMI;
	printf("����(����):");
	scanf_s("%f", &height);
	printf("�魫(����):");
	scanf_s("%f", &weight);

	BMI = weight / (height*height);
	printf("BMI = %.1f\n", BMI);

	if (BMI < 18.5)
		printf("Excessively light\n");

	if (BMI >= 18.5 && BMI < 25)
		printf("Normal\n");

	if (BMI >= 25 && BMI < 30)
		printf("Overweight\n");

	if (BMI > 30)
		printf("Obese\n");
}