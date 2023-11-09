#pragma once
#include <iostream>

class Enemy {
public:
    // 状態の列挙型
    enum State {
        APPROACH,
        ATTACK,
        RETREAT,
        NUM_STATES
    };

    // 関数ポインタの型定義
    typedef void (Enemy::* StateFunction)();

    // コンストラクタ
    Enemy();

    // 状態遷移関数
    void transitionTo(State nextState);

    // メンバ関数ポインタを使った状態遷移
    void update();

    // 各状態に対応する関数
    void approach();
    void attack();
    void retreat();

private:
    State currentState;
    StateFunction stateFunctions[NUM_STATES];
};
