#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* x_ptr;
	x_ptr = &x;	// 주소값을 담음

	cout << "x 값: " << x << "\n";
	cout << "x의 주소값: " << &x << "\n";
	cout << "x_ptr의 값: " << x_ptr << "\n";
	cout << "x_ptr가 가리키는 값: " << *x_ptr << "\n";
}