#include <iostream>
using namespace std;

/*
삽입 정렬
- 앞에서부터 차례대로 이미 정렬된 부분과 비교하여 자신의 위치를 찾아 "삽입"
- 자신보다 앞의 원소가 큰지 작은지 비교 (즉, 이미 정렬된 리스트에서는 뒤에서부터 값 비교)
- 앞의 원소를 비교해야하기 때문에 arr[1]~arr[n]까지 진행 (두 번째 원소부터 시작)
- 삽입을 하면 데이터가 하나씩 밀리기 때문에 배열이 길어질수록 효율이 떨어짐

*/

void InsertionSort(int arr[], int size)
{
	int i, j, key;
	// 인덱스 0은 이미 정렬된 것으로 볼 수 있다
	for (i = 1; i < size; i++)
	{
		key = arr[i]; // 비교하는 key 값

		// 이미 정렬된 리스트의 뒤에서부터 값 비교하면서 자기 위치 찾아가기
		for (j = i-1; j >= 0; j--)
		{
			if (arr[j] > key)
			{
				arr[j+1] = arr[j];	// 뒤로 밀어
			}
			else
			{
				break;
			}
		}
		arr[j+1] = key;
	}
	cout << "hi" << "\n";
}

int main()
{
	const int size = 10;	// 배열의 길이는 그냥 변수로 선언하면 에러 남 (상수로 선언)
	int arr[size] = {5,9,1,8,2,4,3,10,7,6};
	InsertionSort(arr, size);

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}
}