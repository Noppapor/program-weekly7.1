#include<stdio.h>
int main() 
{
	int i;
	float sum, x, average;
	scanf_s("%f", &x);
	sum = x;
	for (i = 2; i <= 10; i++) 
	{
		scanf_s("%f", &x);
		sum = sum + x;
	}
	average = sum / 10;
	printf("%f", average);

}