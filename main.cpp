#include<stdio.h>

//給与計算
//時給の計算
int CalcSalary(int wage, int time)
{
	return wage * time;
}

//再帰的な賃金の計算
int CalcReflexiveWage(int wage, int time)
{
	if (time <= 0)
	{
		return 0;
	}
	if (time <= 1)
	{
		return 100;
	}
	
	int hourlyWage = wage * 2 - 50;	//時給の計算
	return hourlyWage + CalcReflexiveWage(hourlyWage, time - 1);
}

int main()
{
	int hourlyWage = 1072;		//時給
	int reflexiveWage = 100;	//再帰的な賃金
	int time = 0;

	while (time <= 10)
	{
		int reflexive =  CalcReflexiveWage(reflexiveWage, time);
		int hourly = CalcSalary(hourlyWage, time);
		printf("%d時間\n", time);
		printf("再帰的な賃金 : %d	", reflexive);
		printf("一般的な賃金 : %d\n\n", hourly);
		time++;
	}

	return 0;
}