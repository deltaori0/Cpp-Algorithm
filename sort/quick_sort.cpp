#include <iostream>
using namespace std;

#define MAX_SIZE 10
/*
퀵 정렬(Quick Sort)

- 분할 정복 알고리즘 중 하나로 합병 정렬과 다르게 리스트를 비균등하게 분할

1. 리스트 안에 한 요소 선택 (피벗 Pivot)
2. 피벗보다 작은 요소들은 모두 피벗의 왼쪽, 큰 요소들은 모두 피벗의 오른쪽
3. 피벗을 제외한 왼쪽 리스트와 오른쪽 리스트를 다시 정렬
4. 부분 리스트들이 더 이상 분할이 불가능 할 때까지 반복 (즉, 리스트의 길이가 0 또는 1)

- 분할(Divide) : 입력 배열을 피벗을 기준으로 비균등 하게 2개의 부분 배열로 분할
- 정복(Conquer) : 부분 배열을 정렬. 부분 배열의 크기가 충분히 작지 않으면 순환 호출을 이용해서 다시 분할 정복 적용
- 결합(Combine) : 정렬된 부분 배열들을 하나의 배열에 합병

- 순환 호출이 한 번 진행될 때마다 최소한 하나의 원소(피벗)은 최종적으로 위치가 정해지므로 이 알고리즘은 반드시 끝난다는 것이 보장됨

과정
- 왼쪽 끝을 pivot으로 잡고 왼쪽 인덱스 i와 오른쪽 인덱스 j 설정
- i는 pivot보다 큰 수를 만나면 멈추고
- j는 pivot보다 작은 수를 만나면 멈춰서
- 서로 교환
- left가 right보다 커질 때까지 반복 (단, pivot을 만나면 더 이상 가지 않음)
*/


void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void QuickSort(int arr[], int left, int right)
{
	if (left >= right)
		return;

	int pivot = left;
	int i = left+1;
	int j = right;

	while(i <= j)
	{
		while(arr[i] <= arr[pivot] && i <= right) i++;
		while(arr[j] >= arr[pivot] && j > left) j--;

		if (i > j)
		{
			// i와 j가 엇갈렸을 때 pivot 위치 찾아주기
			// j와 pivot 위치 교환 - 더 작은 거랑 교환해줘야지 왼쪽에 Pivot보다 작은게 남으므로
			swap(arr[j], arr[pivot]);
		} 
		else
		{
			swap(arr[i], arr[j]);
		}
	}

	QuickSort(arr, left, i-1);
	QuickSort(arr, i+1, right);
}

int main()
{
	int arr[MAX_SIZE] = {5,9,1,8,2,4,3,10,7,6};

	QuickSort(arr, 0, MAX_SIZE-1);

	for(int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << "\n";
	}
}