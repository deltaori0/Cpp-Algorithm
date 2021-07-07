#include <iostream>
using namespace std;

void AddOneInArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]++;
	}
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	AddOneInArray(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}