#include <iostream>

#define loop() for(;;) {}

int fifth_prac() {

	const int index = 5;
	int arr[index];
	int biggest;
	int num; // ���� �ε���
	int i, j;
	int ok = 0;
	int turn = index;

	for (i = 0; i < index; i++) {
		printf("%d ��° �л��� ���� : ", i + 1);
		std::cin >> arr[i];
	}
	for (i = 0; i < index; i++) {
		std::cout << "�ٽú��� : " << arr[i] << std::endl;
	}
	for (i = 0; i < index; i++) {
		ok = 0;
		for (j = 0; j < index; j++) {
			if (arr[i] >= arr[j]) {
				printf("%d �� %d ���� ���ų� Ů�ϴ�. \n", arr[i], arr[j]);
				ok++;
			}
			else {
				printf("%d �� %d ���� �۽��ϴ�... \n", arr[i], arr[j]);
				break;
			}
		}
		if (ok == index) {
			biggest = arr[i];
			std::cout << "���� ū �� : " << biggest << std::endl;
			break;
		}
	}

	loop()
	return 0;
}