#include<iostream>

using namespace std;



template<typename T>
T half(T);


template<int T>
int half(int);


int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
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