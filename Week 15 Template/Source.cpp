#include<iostream>

using namespace std;



template<typename T>
T half(T);


template<typename int>
int half(int num) {
	return round(static_cast<float>(num) / 2);
}


int main() {

	return 0;
}

template<typename T>
T half(T num) {
	return num / 2;
}

template<int>
int half(int num) {
	return round(static_cast<float>(num) / 2);
}