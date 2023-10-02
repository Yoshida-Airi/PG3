#include<stdio.h>

template <typename Type>	

//値を比べて小さい値を返す
Type Min(Type a, Type b)	
{
	if (a < b)
	{
		return static_cast<Type>(a);
	}
	else if (a > b)
	{
		return static_cast<Type>(b);
	}
}

template<>	//テンプレ解除

char Min<char>(char a, char b)
{
	return printf("数字以外は代入できません\n");
}

int intNumA = 114;
int intNumB = 514;

float floatNumA = 11.4f;
float floatNumB = 51.4f;

double doubleNumA = 3.1;
double doubleNumB = 4.5;

char charNumA = 2;
char charNumB = 4;

int main()
{
	//int型
	printf("%d\n", Min<int>(intNumA, intNumB));
	//float型
	printf("%f\n", Min<float>(floatNumA, floatNumB));
	//double型
	printf("%lf\n", Min<double>(doubleNumA, doubleNumB));
	//char型
	printf("%c\n", Min<char>(charNumA, charNumB));


	return 0;
}