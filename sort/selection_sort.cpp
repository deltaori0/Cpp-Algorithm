#include <iostream>
using namespace std;
# define MAX_SIZE 10
/*
선택 정렬
: 최솟값을 찾아 순서대로 정렬하는 방식

1. 최솟값을 찾는다
2. 0번째 값과 swap
3. 그 다음 최솟값을 찾는다
4. 1번째 값과 swap
...

- 첫 번째 자료를 두 번째 자료부터 마지막 자료까지 차례대로 비교하여 가장 작은 값을 찾아 첫 번재에 놓고
- 두 번째 자료를 세 번째 자료부터 마지막 자료까지 차례대로 비교하여 가장 작은 값을 찾아 두 번째에 놓고 ...

*/

void SelectionSort(int arr[])
{
	int min_index;

	for (int i = 0; i < MAX_SIZE - 1; i++)
	{
		min_index = i;
		// 최소값을 갖는 인덱스 파악
		for (int j = i+1; j < MAX_SIZE; j++)
		{
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}

		// 교환
		if (i != min_index)
		{
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}

	}
}

int main()
{
	int arr[MAX_SIZE] = {5,9,1,8,2,4,3,10,7,6};
	SelectionSort(arr);

	for(int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << "\n";
	}
}