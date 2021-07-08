#include <iostream>
#include <vector>
#include <algorithm>
# include <string>
using namespace std;

bool cmp(const int a, const int b){
	return a > b;
}

int main()
{
	int a[10] = {6,4,2,8,5,1,10,20,42};

	cout << "sort 하기 전: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";

	// sort (Quick Sort)
	// sort 3번째 매개변수 값 정하지 않으면 default로 오름차순 정렬
	sort(a, a+10);
	// 내림차순 정렬을 원한다면
	// #include<functional> 정의한 후
	// sort(a, a+10, greater<int>());

	cout << "sort 한 이후: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

	// stable_sort (Merge Sort)
	// sort와 사용 방법 완전히 같다
	stable_sort(a, a+10);



	// lower_bound, upper_bound
	// 정상적으로 작동하기 위해서는 [first, last) 범위 내의 원소들이 오름차순으로 정렬이 되어있어야 함 (이진탐색이기 때문)
	// lower_bound(first, last, x) : [first, last) 범위에서 "x 이상인 첫 번째 원소"의 위치 반환
	// upper_bound(furst, last, x) : [first, last) 범위에서 "x를 초과하는 첫 번째 원소"의 위치 반환
	// 4 번째 인자로 comparator가 들어갈 수 있음
	vector<int> v = {-2, -2, -1, -1, 0, 0, 0, 1, 1};
	cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n"; // 4
	cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";	// 7


	// 최대값, 최소값 리턴 함수 : 매개변수를 두 개 받음
	int m = 2, n = 3;
	cout << "max 값: " << max(m, n) << "\n";
	cout << "min 값: " << min(m, n) << "\n";

	// 배열이나 벡터 등 구간 안에서 최대 최소값을 구하는 함수
	// max_element(), min_element()
	// 주의 : 값 자체를 리턴하는 게 아니라 그 값의 주소를 리턴 => 값을 참조하려면 *연산자 붙여야 한다
	// 배열
	cout << "arr max 값: " << *max_element(a, a+10) << "\n";
	cout << "arr min 값: " << *min_element(a, a+10) << "\n";
	// 벡터
	cout << "vector max 값: " << *max_element(v.begin(), v.end()) << "\n";
	cout << "vector min 값: " << *min_element(v.begin(), v.end()) << "\n";
	// 문자열
	// #include <string> 해줘야 함
	// 소문자만 있을 때는 상관 없는데 대문자 숫자 이런 거 섞여있으면 아스키코드 순
	string str = "algorithm";
	cout << "string max 값: " << *max_element(str.begin(), str.end()) << "\n";
	cout << "string min 값: " << *min_element(str.begin(), str.end()) << "\n";

	// unique : 벡터에서 중복 원소 제거
	// 중복된 원소를 vector의 제일 뒷부분으로 보내버리고 마지막 원소의 다음 주소를 리턴한다
	// 구간 내에 원소들은 정렬되어 있어야 한다
	// 보통 erase와 함께 중복된 원소 제거하는 방법으로 사용
	// unique가 끝나면 반환되는 값은 vector의 쓰레기값의 첫 번째 위치가 되므로 erase
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "\t";
	cout << "\n";

	// next_permutation : 순열 구현
	// 순열을 구현 컨테이너의 시작과 끝 iterator를 인자로 받음
	// 만약 해당 컨테이너의 다음 순열이 존재하면 그 컨테이너의 원소를 해당 순열 순서로 바꾸고 true 반환
	// 없으면 false 반환
	// 주의
	// 1. 오름차순으로 정렬된 값을 가지는 컨테이너로만 사용 가능
	// 2. default로 < 연산자를 이용해 순열 생성 -> 즉, 오름차순으로 순열 생성
	// 3. 중복이 있는 원소들은 중복을 제외하고 순열을 만들어준다
	// 예 : {0, 0, 1} 이면 {0,0,1}, {0,1,0}, {1,0,0}
	vector<int> v2{1,2,3};
	sort(v.begin(), v.end());	// 정렬 꼭 필요 (오름차순)
	do {
		for(int i=0; i< v2.size(); i++) {
			cout << v2[i] << "\t";
		}
		cout << "\n";
	} while(next_permutation(v2.begin(), v2.end()));

	// 만약 데이터가 내림차순으로 정렬되어 있다면 next_permutation 대신 prev_permutation 사용

	// 조합 구하기
	// temp에서 1이 있는 자리의 원소는 포함이고, 0이 있는 자리의 원소는 미포함이라고 생각하기
	// next_permutation을 사용하면 오름차순으로 정렬되기 때문에 조합은 내림차순으로 출력
	// prev_permutation을 사용하면 모든 조합의 경우를 오름차순으로 출력 가능
	// 예 : {1, 2, 3, 4} 중에 2개의 원소를 고르는 모든 경우의 수 출력
	vector<int> v3{1,2,3,4};
	vector<int> temp{1,1,0,0};
	do {
		for(int i = 0; i < v3.size(); i++){
			if (temp[i] == 1)
				cout << v3[i] << " ";
		}
		cout << "\n";
	} while(prev_permutation(temp.begin(), temp.end()));

}