#include <iostream>
#include <deque>
using namespace std;

// 동적 배열
// 임의의 위치에 있는 원소 접근과 앞과 뒤에서 원소를 추가하는 연산은 O(1) 보장

int main()
{
	// int 자료형을 저장하는 동적 배열 생성
	deque<int> dq;

	// 배열 맨 앞에 원소(5) 추가
	dq.push_front(5);

	// 배열 맨 뒤에 원소(4) 추가
	dq.push_back(4);

	// 배열 맨 앞 원소 삭제
	dq.pop_front();

	// 배열 맨 뒤 원소 삭제
	dq.pop_back();

	// 나머지는 vector와 동일

	return 0;
}