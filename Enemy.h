#pragma once
#include <iostream>

class Enemy {
public:
    // 状態の列挙型
    enum class State {
        APPROACH,
        ATTACK,
        RETREAT,
    };

    // メンバ関数ポインタを使った状態遷移
    void update();

    // 各状態に対応する関数
    void approach();
    void attack();
    void retreat();

private:

    // 関数ポインタの型定義
    static void (Enemy::* StateFunction[])();
    State state_ = State::APPROACH;
};
