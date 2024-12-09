#include<iostream>

using namespace std;

template<typename T>
T half(T);

template<int>
int half(int);

int main() {
	return 0;
}

template<typename T>
T half(T num) {
	return num / 2;
}