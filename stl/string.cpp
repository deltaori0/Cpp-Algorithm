#include<iostream>
#include<string>
using namespace std;
/*
string 클래스 특징
1. 문자의 끝에 null 문자(\0)가 포함되지 않는다
2. 배열처럼 한 문자씩 다룰 수 있다
3. string 클래스끼리는 문자열을 합치는 것이 +연산자 하나만으로 가능하다
4. 문자열을 사전순으로 정렬할 때도 string 변수를 사용하면 편리하다
*/

int main()
{
	string str1 = "Test String";

	// string 인덱스 접근
	// 이때 반환되는 문자는 char 형임에 주의!
	cout << str1[2] << "\n";
	cout << str1.at(2) << "\n";

	// 문자열의 맨 앞과 맨 끝 문자 반환
	cout << str1.front() << "\n";
	cout << str1.back() << "\n";

	// 문자열의 길이 반환 (str.size(), str.length() 둘 다 사용 가능)
	cout << str1.size() << "\n";
	cout << str1.length() << "\n";

	// 숫자 문자열 변환
	// 1. 숫자 -> 문자열 : to_string(숫자)
	int a = 7;
	string str2;
	str2 = to_string(a); // 7이 string "7"로 변환되어 str1에 저장된다

	// 2. 문자열 -> 숫자 : stoi, stod, stof
	string str_a = "2";
	string str_b = "7.02";
	string str_c = "3.14";
	string str_d = "2300000000";

	int after_a = stoi(str_a);	// "7"을 int형 7로 바꿔줌
	double after_b = stod(str_b);	// "7.02"를 double형 7.02로 바꿔줌
	float after_c = stof(str_c); 	// "3.14"를 float형 3.14로 바꿔줌
	long int after_d = stof(str_d);	// "2300000000"를 long int 형으로 바꿔줌


	// string의 유용한 함수들

	// 문자열이 비어있는지 확인
	// size 혹은 length 값이 0인지 아닌지 보는 것
	cout << "empty? " << str1.empty() << "\n";

	// str1, str2 문자열 간의 서로 swap 하기
	cout << "before swap str1 " << str1 << "\n";
	cout << "before swap str2 " << str2 << "\n";
	swap(str1, str2);
	cout << "after swap str1 " << str1 << "\n";
	cout << "after swap str2 " << str2 << "\n";

	// str1 문자열 맨 뒤에 str 문자열을 추가한다
	str1.append(str2);
	cout << "after append " << str1 << "\n";

	// str1에 들어있던 문자열을 없앤다 (단, capacity 값은 그대로 유지)
	str1.clear();
	cout << "after clear : " << str1 << "\n";

	// str3에서 문자열 str4을 찾고, 이것의 str에서의 시작점 인덱스를 반환
	string str3 = "TESTSTSTSTS";
	string str4 = "ST";
	cout << "find " << str3.find(str4) << "\n";

	// 문자열의 일부분을 반환 -> 반환형은 string !!
	cout << str3.substr(3) << "\n";	// 3번째 인덱스인 T부터 끝까지 반환
	cout << str3.substr(3, 2) << "\n";	// 3번쨰 인덱스인 T부터 2 길이만큼의 문자열 반환 : TS

	// replace
	string str5 = "TEST";
	string str6 = "your";
	cout << str5.replace(1, 2, str6) << "\n";	// str5의 1번째 인덱스인 E부터 2개의 길이만큼의 문자열이 str6로 변경
	// 즉, TyourT로 변경

	string str7 = "TESTT";
	// str의 1번째 인덱스부터 3번째 인덱스 직전까지의 문자열을 str2로 변경
	// EST를 aa로 변경하여 -> TaaT가 반환됨
	str7.replace(str7.begin()+1, str7.begin()+4, "aa");
	cout << str7 << "\n";

	// 문자열의 사전 순서 비교 : 부등호로 비교 가능 (<, >, ==)
	string str8 = "aaad";
	string str9 = "aaaz";
	cout << (str8 < str9) << "\n";	// 1(참)이 반환됨

	// 문자열 합치기 : + 연산자
	string str10 = str8 + str9;
	cout << str10 << "\n";
}