#include <iostream>
#include<thread>

// 1を表示する関数
void printOne() {
	std::cout << "thread1\n";
};

// 2を表示する関数
void printTwo() {
	std::cout << "thread2\n";
};

// 3を表示する関数
void printThree() {
	std::cout << "thread3\n";
};


int main() {

	// スレッドを作成して関数を実行
	std::thread thread1(printOne);
	thread1.join();
	std::thread thread2(printTwo);
	thread2.join();
	std::thread thread3(printThree);
	thread3.join();

	return 0;
}