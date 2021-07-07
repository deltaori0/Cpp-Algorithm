#include <iostream>
using namespace std;
# define MAX_SIZE 10
/*
버블 정렬
: 서로 인접한 두 원소를 비교해나가는 방식

- 가장 큰 수가 맨 뒤로 밀려서 마지막에 위치
- 뒤에서부터 정렬이 완료된 원소들이 하나씩 위치하게 된다
*/

void BubbleSort(int arr[])
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		int temp;
		// 한 바퀴 돌 때마다 순회할 원소의 개수가 하나씩 줄어든다
		for (int j = 0; j < MAX_SIZE-(i+1); j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[MAX_SIZE] = {5,9,1,8,2,4,3,10,7,6};
	BubbleSort(arr);

	for(int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << "\n";
	}
}