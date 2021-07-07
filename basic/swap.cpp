#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main(){
	int x = 10;
	int y = 5;
	swap(x, y);
	
	cout << "x는 " << x << "\n";
	cout << "y는 " << y << "\n";
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	return;
}