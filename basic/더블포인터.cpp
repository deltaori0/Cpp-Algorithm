#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* x_ptr = &x;
	int** x_ptr_ptr = &x_ptr;

	cout << x << "\n";
	cout << *x_ptr << "\n";
	cout << **x_ptr_ptr << "\n";

	return 0;
}