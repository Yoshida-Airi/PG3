#include<stdio.h>

template <typename Type, typename Type2>

//値を比べて小さい値を返す
Type Min(Type a, Type2 b)
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

char Min<char>(char a, char b)	//char型のみ個別対応
{
	printf("数字以外は代入できません\n");
	return 0;
}


int main()
{
	//int型
	printf("%d\n", Min<int>(114, 514));
	//float型
	printf("%f\n", Min<float>(11.4f, 51.4f));
	//double型
	printf("%lf\n", Min<double>(3.1, 4.5));
	//char型
	Min<char>('a', 'b');


	return 0;
}