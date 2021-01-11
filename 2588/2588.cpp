#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d\n%d", &a, &b);
	int temp, hunds, tens, units;
	temp = b;
	hunds = temp/100;
	temp %= 100;
	tens = temp/10;
	temp %= 10;
	units = temp;
	printf("%d \n", a*units);
	printf("%d \n", a*tens);
	printf("%d \n", a*hunds);
	printf("%d", a*b);
	return 0;
}
