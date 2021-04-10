#include<stdio.h>
int main()
{
	int num;
	printf("임의의 정수를 입력하세요");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수");
	}
}