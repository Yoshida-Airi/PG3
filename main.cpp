#include<stdio.h>
#include"windows.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <functional>


// サイコロの出目をランダムに生成する関数
std::function<int()> rollDice = []() {

    // 乱数生成器の初期化
    std::random_device seedGenerator;
    std::mt19937 randomEngine(seedGenerator());
    std::uniform_int_distribution<int> distribution(1, 6);
    return distribution(randomEngine);
};


int SetTimeout(std::function<int()> func, int time)
{
    std::this_thread::sleep_for(std::chrono::seconds(time));    //時間分待つ
    return func();
}

// ゲームのメイン関数
void playGame() 
{
    std::cout << "サイコロを振りました。奇数か偶数か当ててください（奇数: 1, 偶数: 2）: ";

    int userChoice;
    std::cin >> userChoice;

    int diceResult = SetTimeout(rollDice, 3);

    // ランダムな出目とユーザーの選択をコールバック関数に渡し、結果を待つ
    std::function<bool(int, int)> isGuessCorrect = [](int result, int choice) {
        return (result % 2 == 1 && choice == 1) || (result % 2 == 0 && choice == 2);
        };

    if (isGuessCorrect(diceResult, userChoice)) {
        std::cout << "サイコロの出目 : " << diceResult << "\n" << "正解！\n" << std::endl;
    }
    else {
        std::cout << "サイコロの出目 : " << diceResult << "\n" << "不正解！\n" << std::endl;
    }
}

int main(void)
{
	SetConsoleOutputCP(65001);
    playGame();
	return 0;
}