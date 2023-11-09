#include "Enemy.h"

// コンストラクタ
Enemy::Enemy() : currentState(APPROACH) {
    // 初期化時に関数ポインタの配列を設定
    stateFunctions[APPROACH] = &Enemy::approach;
    stateFunctions[ATTACK] = &Enemy::attack;
    stateFunctions[RETREAT] = &Enemy::retreat;
}

// 状態遷移関数
void Enemy::transitionTo(State nextState) {
    currentState = nextState;
}

// メンバ関数ポインタを使った状態遷移
void Enemy::update() {
    (this->*stateFunctions[currentState])();
}

// 各状態に対応する関数
void Enemy::approach() {
    std::cout << "敵が近づく" << std::endl;
    // 何か処理
    transitionTo(ATTACK);
}

void Enemy::attack() {
    std::cout << "敵が射撃する" << std::endl;
    // 何か処理
    transitionTo(RETREAT);
}

void Enemy::retreat() {
    std::cout << "敵が離脱する" << std::endl;
    // 何か処理
    transitionTo(APPROACH);
}
