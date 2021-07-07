#include <iostream>
using namespace std;

int main()
{
	int arr[3] = {1, 2, 3};
	int* x_ptr;
	x_ptr = &arr[0]; // 1이 위치한 메모리 주소값
	x_ptr++;	// 2가 위치한 메모리 주소값이 된다

	cout << *x_ptr << "\n";
	return 0;
}