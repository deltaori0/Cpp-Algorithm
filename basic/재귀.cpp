#include <iostream>
using namespace std;

void count_recursive(int num)
{
	if (num == 1)
	{
		cout << "Num : " << num << "\n";
		return;
	}

	cout << "Num : " << num << "\n";
	count_recursive(num-1);

}

int main()
{
	count_recursive(5);
}