#include <string>
#include <chrono>
#include <iostream>
#include"windows.h"

int main() {

    SetConsoleOutputCP(65001);

    // 初期化
    std::string a(100000, 'a');
    std::string copy{};

    // 計測開始時刻
    auto start_copy = std::chrono::system_clock::now();
    copy = a;
    // 計測終了時刻
    auto end_copy = std::chrono::system_clock::now();

    // 計測結果を出力
    std::chrono::duration<double, std::micro> result1 = end_copy - start_copy;

    // 移動
    auto start_move = std::chrono::system_clock::now();
    std::string move{};
    move = std::move(a);
    auto end_move = std::chrono::system_clock::now();

    // 計測結果を出力
    std::chrono::duration<double, std::micro> result2 = end_move - start_move;

    // 経過時間を表示
    std::cout << "copy : " << result1.count() << "μs" << std::endl;
    std::cout << "move　: " << result2.count() << "μs" << std::endl;

    return 0;
}