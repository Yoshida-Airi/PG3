#include<stdio.h>
#include<iostream>
#include<windows.h>

#include<list>

int main(void)
{
	SetConsoleOutputCP(65001);
	char str[] = "あいうえお";
	
	//char station[30][20] =
	//{
	//	"Tokyo",
	//	"Kanda",
	//	"Akihabara",
	//	"Okachimati",
	//	"Ueno",
	//	"Uguisudani",
	//	"Nippori",
	//	/*"Nishi-Nippori",*/
	//	"Tabata",
	//	"Komagome",
	//	"Sugamo",
	//	"Otsuka",
	//	"Ikebukuro",
	//	"Mejiro",
	//	"Takadanobaba",
	//	"Shin-Okubo",
	//	"Shinjuku",
	//	"Yoyogi",
	//	"Harajuku",
	//	"Shibuya",
	//	"Ebisu",
	//	"Meguro",
	//	"Gotanda",
	//	"Osaki",
	//	"Shinagawa",
	///*	"Takanawa-Gateway",*/
	//	"Tamachi",
	//	"Hamamatsucho",
	//	"Shimbashi",
	//	"Yurakucho"
	//};
	

	std::list<const char*>YamanoteLineStation =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimati",
		"Ueno",
		"Uguisudani",
		"Nippori",
		/*"Nishi-Nippori",*/
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		/*	"Takanawa-Gateway",*/
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	//1928年の駅を表示
	std::cout << "YamanoteLineStation1928" << std::endl;
	for (std::list<const char*>::iterator itr = YamanoteLineStation.begin(); itr != YamanoteLineStation.end(); ++itr) {
		std::cout << *itr << std::endl;
	}

	for (std::list<const char*>::iterator itr = YamanoteLineStation.begin(); itr != YamanoteLineStation.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = YamanoteLineStation.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	//1972年の駅を表示
	std::cout << "\nYamanoteLineStation1972" << std::endl;
	for (std::list<const char*>::iterator itr = YamanoteLineStation.begin(); itr != YamanoteLineStation.end(); ++itr) {
		std::cout << *itr << std::endl;
	}

	for (std::list<const char*>::iterator itr = YamanoteLineStation.begin(); itr != YamanoteLineStation.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = YamanoteLineStation.insert(itr, "Takanawa-Gateway");
			++itr;
		}
	}


	//2023年の駅を表示
	std::cout << "\nYamanoteLineStation2023" << std::endl;
	for (std::list<const char*>::iterator itr = YamanoteLineStation.begin(); itr != YamanoteLineStation.end(); ++itr) {
		std::cout << *itr << std::endl;
	}

	return 0;
}