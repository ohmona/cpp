#include <iostream>
#include "hello.h"

#define loop() for(;;) {}

//1. 기본 (변수, 출력)
int first() {

	int ab, b;
	ab = 10;
	b = 3;
	int Ab(9);
	float fl = 10.00f;
	double dou = 10.00;

	std::cout << "Hello world!!!" << std::endl;

	std::cout << ab / b << std::endl;

	std::cout << "Hi" << std::endl
	          << "my name is "
	          << "ohmona" << std::endl;

	printf("%d \n", ab);

	loop()
	return 0;
}

// 2. 조건문, 입력

int second() {

	int a;
	int b, c;

	std::cout << "숫자 아무거나를 입력해주세요!!" << std::endl;
	std::cin >> a;

	if (a == 7) {
		std::cout << "와! 행운의 숫자를 입력했어요!" << std::endl;
	}
	else {
		std::cout << "다시 시도해 주세요..." << std::endl;
	}

	std::cout << "두숫자 아무거나를 입력해주세요!!" << std::endl;
	std::cin >> b >> c;
	if (!c) {
		std::cout << "0 으로 나눌수 없습니다" << std::endl;
		return 0;
	}
	else if (b <= c || c < 0) {
		std::cout << "2번째로 입력한 값이 더 크거나 음수군요!" << std::endl;
	}
	std::cout << "입력된 값의 나눈값은 " << b / c << "이며. " << std::endl;
	std::cout << "입력된 값의 나눈값의 나머지는 " << b % c << "입니다!" << std::endl;

	loop()
	return 0;
}

// 3. 반복문
int third() {

	int sum = 0;
	for (int i = 0; i <= 10000; i++) {
		sum += i;
	}
	std::cout << "1 에서 20 까지의 합 : " << sum << std::endl;

	int grade = 0;
	sum = 0;
	int count = 0;
	std::cout << "당신의 성적의 갯수를 입력하세요 : ";
	std::cin >> count;
	for (int i = 1; i <= count; i++) {
		std::cout << "당신의 성적을 입력하세요 : ";
		std::cin >> grade;
		sum += grade;
	}
	std::cout << "당신의 점수의 평균은 " << sum / count << " 입니다." << std::endl;

	loop()
	return 0;
}

// 4. 조건문 (switch)
int forth() {
	int input;
	std::cout << "마이 애니멀 업그레이드" << std::endl;
	std::cout << "동작을 입력하세요" << std::endl;
	std::cout << "1. 놀아주기" << std::endl;
	std::cout << "2. 먹이주기" << std::endl;
	std::cout << "3. 귀여워하기" << std::endl;

	std::cin >> input;

	// case 는 변수가 돼서는 안됀다.
	switch (input) {
	case 1:
		std::cout << "귀찮은데" << std::endl;
		// 조건이 끝났을때에는 break; 를 반드시 써야한다.
		break;
	case 2:
		std::cout << "자 먹어라" << std::endl;
		break;
	case 3:
		std::cout << "애니멀상, 카와이데스네~" << std::endl;
		break;
	default:
		std::cout << "잘못된 선택지를 입력하셨습니다." << std::endl;
		break;

	}

	loop()
	return 0;
}

// 5. 배열
int fifth() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "배열 arr 의 3번째 원소 : " << arr[2] << std::endl;

	int arr2[] = { 2,32,543,3,234,67,29,9,20,79 };

	for (int i = 0; i < 10; i++) {
		printf("배열 arr2 의 %d 번째 원소 : %d \n", i + 1, arr2[i]);
	}

	int arr3[5];
	int i, ave = 0;

	for (i = 0; i < 5; i++) {
		printf("%d 번째 학생의 성적 : ", i + 1);
		std::cin >> arr3[i];
	}
	for (i = 0; i < 5; i++) {
		ave = ave + arr3[i];
	}
	ave = ave / 5;
	std::cout << "학생들의 평균성적 : " << ave << std::endl;

	for (i = 0; i < 5; i++) {
		std::cout << i + 1 << " 번째 학생 : ";
		if (arr3[i] >= ave) {
			std::cout << "합격" << std::endl;
		}
		else {
			std::cout << "불합격" << std::endl;
		}
	}

	// 소수찾기
	int guess = 5;
	int prime[100];
	int index = 1;
	int count;

	prime[0] = 2;
	prime[1] = 3;

	for (;;) {
		count = 0;
		for (int i = 0; i <= index; i++) {
			if (guess % prime[i] != 0) {
				count++;
			}
			else {
				break;
			}
		}
		if (count == (index + 1)) {
			index++;
			prime[index] = guess;
			std::cout << index + 1 << " 번째 소수 : " << guess << std::endl;
			if (index == 99) break;
		}
		guess += 2;
	}

	/*
	*  i. 배열크기 정의할때 주의할점
	*/

	int total = 3;
	int arr4[3]; // !!! arr4[total] 배열의 크기를 변수로 정의할수 없다. (only 상수)
	ave = 0;

	std::cout << " 변수 크기 할당 " << std::endl;
	for (i = 0; i < total; i++) {
		std::cout << " 입력 : ";
		std::cin >> arr4[i];
		ave = ave + arr4[i];
	}
	std::cout << " 평균 : " << ave / total << std::endl;
	
	/*
	*	ii. 변수의 초기화
	*	초기화가 안된 변수는 사용할 수 없다.
	* 
	*	int a;
	*	print(a);
	*	-> error
	*/

	// 하지만.
	int arr5[3] = { 1 }; // = arr5[3] = { 1, 0, 0 };
	std::cout << "오류? : " << arr5[1] << std::endl;

	loop()
	return 1;
}

// main 함수
int main() {
	fifth();
	return 0;
}