#include <iostream>

#define loop() for(;;) {}

int fifth_prac() {

	const int index = 5;
	int arr[index];
	int biggest;
	int num; // 비교할 인덱스
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