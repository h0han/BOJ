#include <stdio.h>

int main()
{
	int n0 = 0, n1 = 1;
	int n;
	int var;
	scanf("%d", &var);
	if (var == 0){
		printf("%d", n0);
	}
	if (var == 1){
		printf("%d", n1);
	}
	if (var > 1){
		for (int i = 2;i < var + 1;i++){
			n = n0 + n1;
			n0 = n1;
			n1 = n;
		}
		printf("%d", n);
	}
 } 
