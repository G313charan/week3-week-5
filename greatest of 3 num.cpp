#include <stdio.h>
int main()
{
	double num1, num2, num3;
	printf("enter three numbers:");
	scanf("%1f %1f %1f", &num1,&num2,&num3);
	if (num1 >= num2 && num1 >= num3)
	printf("the greatest number is %.21f\n", num1);
	else if (num2 >= num1 && num2 >= num3)
	printf("the greatest number is %.21f\n", num2);
	else
	printf("the greatest number is %.21f\n", num3);
	return 0;
	}
