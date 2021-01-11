#include <stdio.h>

int main()
{
	int num;
	int cnt = 99;
	int i = 100;
	scanf("%d", &num);
	if (num < 100){
		printf("%d", num);
	}
	if ((100 <= num) && (num <= 1000)){
		while (i < num+1){
			int temp = i;
			int hunds = temp/100;
			temp %= 100;
			int tens = temp/10;
			temp %= 10;
			int units = temp;
			if ((hunds - tens) == (tens - units)){
				cnt += 1;
			}
			i++;
		}
		printf("%d", cnt);
		return 0;
	} 
}
