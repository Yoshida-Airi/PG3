#include<stdio.h>
#include"windows.h"
#include<random>
#include <iostream>
#include <random>
#include <chrono>
#include <thread>


// サイコロの出目をランダムに生成する関数
int rollDice(std::mt19937 randomEngine)
{
    std::uniform_int_distribution<int> distribution(1, 6);
    return distribution(randomEngine);
}

// コールバック関数の型定義
typedef void (*CallbackFunction)(int, int);

void SetTimeout(CallbackFunction func, int time,int diceResult) {
    std::this_thread::sleep_for(std::chrono::seconds(time));
    func(time,diceResult);
}


// コールバック関数 出目とユーザーの選択を比較し、正誤を返す
void checkGuess(int diceResult, int userChoice)
{
    if ((diceResult % 2 == 1 && userChoice == 1) || (diceResult % 2 == 0 && userChoice == 2)) {
     std::cout << "サイコロの出目 : " << diceResult << "\n" << "正解！\n" << std::endl;
    }
    else {
        std::cout << "サイコロの出目 : " << diceResult << "\n" << "不正解！\n" << std::endl;
    }
}


int main(void)
{
	SetConsoleOutputCP(65001);

    // 乱数生成器の初期化
    std::random_device seedGenerator;
    std::mt19937 randomEngine(seedGenerator());

    int diceResult = rollDice(randomEngine); // サイコロを振る
    std::cout << "サイコロを振りました。奇数か偶数か当ててください（奇数: 1, 偶数: 2）: ";

    int userChoice;
    std::cin >> userChoice;

    CallbackFunction p;
    p = checkGuess;

    SetTimeout(p, 3,diceResult);

	return 0;
}