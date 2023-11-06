#include<stdio.h>
#include<iostream>
#include<windows.h>

int main(void)
{
	SetConsoleOutputCP(65001);
	char str[] = "あいうえお";
	printf("%s", str);

	return 0;
}