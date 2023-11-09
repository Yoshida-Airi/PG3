#include "Enemy.h"

//メンバ関数ポインタテーブルの実体定義
void (Enemy::* Enemy::StateFunction[])() = {
    &Enemy::approach,
    &Enemy::attack,
    &Enemy::retreat
};


void Enemy::update() {
    //メンバ関数ポインタの呼び出し
    (this->*StateFunction[static_cast<size_t>(state_)])();
    state_ = State::APPROACH;
    (this->*StateFunction[static_cast<size_t>(state_)])();
    state_ = State::ATTACK;
    (this->*StateFunction[static_cast<size_t>(state_)])();
}


// 各状態に対応する関数
void Enemy::approach() {
    std::cout << "敵が近づく" << std::endl;
}

void Enemy::attack() {
    std::cout << "敵が射撃する" << std::endl;
}

void Enemy::retreat() {
    std::cout << "敵が離脱する" << std::endl;
}
