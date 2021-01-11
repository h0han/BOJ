#include <stdio.h> 

int main()
{
	int grade;
	scanf("%d", &grade);
	if ((90 <= grade)&&(grade <= 100)){
		printf("A");
	}
	if ((80 <= grade)&&(grade <= 89)){
		printf("B");
	}
	if ((70 <= grade)&&(grade <= 79)){
		printf("C");
	}
	if ((60 <= grade)&&(grade <= 69)){
		printf("D");
	}
	if (grade < 60){
		printf("F");
	}
	return 0;
}
