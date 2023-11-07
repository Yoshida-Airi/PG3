#include<stdio.h>
#include"windows.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <functional>


// サイコロの出目をランダムに生成する関数
int rollDice(std::mt19937 randomEngine)
{
    std::uniform_int_distribution<int> distribution(1, 6);
    return distribution(randomEngine);
}

// ゲームのメイン関数
void playGame(int time, std::mt19937 randomEngine) 
{
    int diceResult = rollDice(randomEngine); // サイコロを振る
    std::cout << "サイコロを振りました。奇数か偶数か当ててください（奇数: 1, 偶数: 2）: ";

    int userChoice;
    std::cin >> userChoice;

    // ランダムな出目とユーザーの選択をコールバック関数に渡し、結果を待つ
    std::function<bool(int, int)> isGuessCorrect = [](int result, int choice) {
        return (result % 2 == 1 && choice == 1) || (result % 2 == 0 && choice == 2);
        };

    std::this_thread::sleep_for(std::chrono::seconds(time));

    if (isGuessCorrect(diceResult, userChoice)) {
        std::cout << "サイコロの出目 : " << diceResult << "\n" << "正解！\n" << std::endl;
    }
    else {
        std::cout << "サイコロの出目 : " << diceResult << "\n" << "不正解！\n" << std::endl;
    }
}

// コールバック関数 出目とユーザーの選択を比較し、正誤を返す
bool checkGuess(int diceResult, int time, int userChoice)
{
    std::this_thread::sleep_for(std::chrono::seconds(time)); // 3秒待つ

    if ((diceResult % 2 == 1 && userChoice == 1) || (diceResult % 2 == 0 && userChoice == 2)) {
        return true; // 正解
    }
    else {
        return false; // 不正解
    }
}


int main(void)
{
	SetConsoleOutputCP(65001);

    // 乱数生成器の初期化
    std::random_device seedGenerator;
    std::mt19937 randomEngine(seedGenerator());

    playGame(3,randomEngine);

	return 0;
}