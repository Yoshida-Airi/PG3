#include<stdio.h>


int main(void)
{
	char playerAnswer[10];

	printf("丁(奇数)か半(偶数)かを入力してください\n");
	scanf_s("%s", playerAnswer, 10);
	printf("%s", playerAnswer);

	return 0;
}