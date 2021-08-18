#include <iostream>
#define loop() for(;;) { }

namespace lesson {

namespace basics {

	//1. 기본 (변수, 출력)
	int main() {

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
}

namespace condInput {
	// 2. 조건문, 입력
	int main() {

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
}

namespace loop {
	// 3. 반복문
	int main() {

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
}

namespace switchs {
	// 4. 조건문 (switch)
	int main() {
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
}

namespace arrays {
	// 5. 배열
	int main() {

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

	int practise() {
		const int index = 5;
		int arr[index];
		int biggest;
		int i, j;
		int ok = 0;
		int turn = index;

		for (i = 0; i < index; i++) {
			printf("%d 번째 학생의 성적 : ", i + 1);
			std::cin >> arr[i];
		}
		for (i = 0; i < index; i++) {
			std::cout << "다시보기 : " << arr[i] << std::endl;
		}
		for (i = 0; i < index; i++) {
			ok = 0;
			for (j = 0; j < index; j++) {
				if (arr[i] >= arr[j]) {
					printf("%d 는 %d 보다 같거나 큽니다. \n", arr[i], arr[j]);
					ok++;
				}
				else {
					printf("%d 는 %d 보다 작습니다... \n", arr[i], arr[j]);
					break;
				}
			}
			if (ok == index) {
				biggest = arr[i];
				std::cout << "가장 큰 수 : " << biggest << std::endl;
				break;
			}
		}

		loop()
		return 0;
	}
}

namespace mulDimArr {
	// 6. 고차원 배열
	int main() {

		int arr[2][3] = { 1,2,3,4,5,6 };
		std::cout << "1 번째열의 2 번째 행 : " << arr[0][1] << std::endl;
		std::cout << "2 번째 열의 3 번째 행 : " << arr[1][2] << std::endl;

		/*
		*	1 차원 배열이나 2차원 배열이나 메모리 상에서는
		*	한줄로 저장된다.
		*
		*	e.g.
		*	arr[0][0], 
		*	arr[0][1], 
		*	arr[0][2],
		*	arr[1][0], 
		*	arr[1][1], 
		*	arr[1][2],
		*	arr[2][0], 
		*	arr[2][1], 
		*	arr[2][2]
		*
		*	하지만 2차원의 경우 사각형 안에 있다고 생각해도
		*	된다.
		*	
		*	arr[0][0], arr[0][1]
		*	arr[1][0], arr[1][1]
		*/

		int score[3][2];
		int i, j;
		for (i = 0; i < 3; i++) {
				std::cout << i + 1 << "번째 학생의 국어점수 : ";
				std::cin >> score[i][0];
				std::cout << i + 1 << "번째 학생의 수학점수 : ";
				std::cin >> score[i][1];
		}

		for (i = 0; i < 3; i++) {
			std::cout << i + 1 << "번째 학생의 국어점수 : "
				<< score[i][0] << ", 수학점수 :" << score[i][1] << std::endl;
		}

		// 2차원 배열 정의
		int arr2[2][3] = { 1,2,3,4,5,6 };
		int arr3[2][3] = { {1,2,3}, {4,5,6} };

		int arr4[] = { 1,2,3,4 }; // 컴파일러가 알아서 4개 크기인걸 인식함
		int arr5[4] = { 1,2,3,4 }; // 결국 이거랑 같은거임

		/* 
		*  ,다만
		*  arr[]; 은 안됀다.
		*  컴파일시 메모리를 할당해야 하기 때문.
		*/


		loop()
		return 0;
	}
}
namespace pointer {
	void main() {
		loop()
	}
}
}

// main 함수
int main() {
lesson::pointer::main();
return 0;
}