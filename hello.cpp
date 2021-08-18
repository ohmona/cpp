#include <iostream>
#define loop() for(;;) { }

namespace lesson {

namespace basics {

	//1. �⺻ (����, ���)
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
	// 2. ���ǹ�, �Է�
	int main() {

		int a;
		int b, c;

		std::cout << "���� �ƹ��ų��� �Է����ּ���!!" << std::endl;
		std::cin >> a;

		if (a == 7) {
			std::cout << "��! ����� ���ڸ� �Է��߾��!" << std::endl;
		}
		else {
			std::cout << "�ٽ� �õ��� �ּ���..." << std::endl;
		}

		std::cout << "�μ��� �ƹ��ų��� �Է����ּ���!!" << std::endl;
		std::cin >> b >> c;
		if (!c) {
			std::cout << "0 ���� ������ �����ϴ�" << std::endl;
			return 0;
		}
		else if (b <= c || c < 0) {
			std::cout << "2��°�� �Է��� ���� �� ũ�ų� ��������!" << std::endl;
		}
		std::cout << "�Էµ� ���� �������� " << b / c << "�̸�. " << std::endl;
		std::cout << "�Էµ� ���� �������� �������� " << b % c << "�Դϴ�!" << std::endl;

		loop()
			return 0;
	}
}

namespace loop {
	// 3. �ݺ���
	int main() {

		int sum = 0;
		for (int i = 0; i <= 10000; i++) {
			sum += i;
		}
		std::cout << "1 ���� 20 ������ �� : " << sum << std::endl;

		int grade = 0;
		sum = 0;
		int count = 0;
		std::cout << "����� ������ ������ �Է��ϼ��� : ";
		std::cin >> count;
		for (int i = 1; i <= count; i++) {
			std::cout << "����� ������ �Է��ϼ��� : ";
			std::cin >> grade;
			sum += grade;
		}
		std::cout << "����� ������ ����� " << sum / count << " �Դϴ�." << std::endl;

		loop()
			return 0;
	}
}

namespace switchs {
	// 4. ���ǹ� (switch)
	int main() {
		int input;
		std::cout << "���� �ִϸ� ���׷��̵�" << std::endl;
		std::cout << "������ �Է��ϼ���" << std::endl;
		std::cout << "1. ����ֱ�" << std::endl;
		std::cout << "2. �����ֱ�" << std::endl;
		std::cout << "3. �Ϳ����ϱ�" << std::endl;

		std::cin >> input;

		// case �� ������ �ż��� �ȉ´�.
		switch (input) {
		case 1:
			std::cout << "��������" << std::endl;
			// ������ ������������ break; �� �ݵ�� ����Ѵ�.
			break;
		case 2:
			std::cout << "�� �Ծ��" << std::endl;
			break;
		case 3:
			std::cout << "�ִϸֻ�, ī���̵�����~" << std::endl;
			break;
		default:
			std::cout << "�߸��� �������� �Է��ϼ̽��ϴ�." << std::endl;
			break;
		}

		loop()
			return 0;
	}
}

namespace arrays {
	// 5. �迭
	int main() {

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

		std::cout << "�迭 arr �� 3��° ���� : " << arr[2] << std::endl;

		int arr2[] = { 2,32,543,3,234,67,29,9,20,79 };

		for (int i = 0; i < 10; i++) {
			printf("�迭 arr2 �� %d ��° ���� : %d \n", i + 1, arr2[i]);
		}

		int arr3[5];
		int i, ave = 0;

		for (i = 0; i < 5; i++) {
			printf("%d ��° �л��� ���� : ", i + 1);
			std::cin >> arr3[i];
		}
		for (i = 0; i < 5; i++) {
			ave = ave + arr3[i];
		}
		ave = ave / 5;
		std::cout << "�л����� ��ռ��� : " << ave << std::endl;

		for (i = 0; i < 5; i++) {
			std::cout << i + 1 << " ��° �л� : ";
			if (arr3[i] >= ave) {
				std::cout << "�հ�" << std::endl;
			}
			else {
				std::cout << "���հ�" << std::endl;
			}
		}

		// �Ҽ�ã��
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
				std::cout << index + 1 << " ��° �Ҽ� : " << guess << std::endl;
				if (index == 99) break;
			}
			guess += 2;
		}

		/*
		*  i. �迭ũ�� �����Ҷ� ��������
		*/

		int total = 3;
		int arr4[3]; // !!! arr4[total] �迭�� ũ�⸦ ������ �����Ҽ� ����. (only ���)
		ave = 0;

		std::cout << " ���� ũ�� �Ҵ� " << std::endl;
		for (i = 0; i < total; i++) {
			std::cout << " �Է� : ";
			std::cin >> arr4[i];
			ave = ave + arr4[i];
		}
		std::cout << " ��� : " << ave / total << std::endl;

		/*
		*	ii. ������ �ʱ�ȭ
		*	�ʱ�ȭ�� �ȵ� ������ ����� �� ����.
		*
		*	int a;
		*	print(a);
		*	-> error
		*/

		// ������.
		int arr5[3] = { 1 }; // = arr5[3] = { 1, 0, 0 };
		std::cout << "����? : " << arr5[1] << std::endl;

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
}

namespace mulDimArr {
	// 6. ������ �迭
	int main() {

		int arr[2][3] = { 1,2,3,4,5,6 };
		std::cout << "1 ��°���� 2 ��° �� : " << arr[0][1] << std::endl;
		std::cout << "2 ��° ���� 3 ��° �� : " << arr[1][2] << std::endl;

		/*
		*	1 ���� �迭�̳� 2���� �迭�̳� �޸� �󿡼���
		*	���ٷ� ����ȴ�.
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
		*	������ 2������ ��� �簢�� �ȿ� �ִٰ� �����ص�
		*	�ȴ�.
		*	
		*	arr[0][0], arr[0][1]
		*	arr[1][0], arr[1][1]
		*/

		int score[3][2];
		int i, j;
		for (i = 0; i < 3; i++) {
				std::cout << i + 1 << "��° �л��� �������� : ";
				std::cin >> score[i][0];
				std::cout << i + 1 << "��° �л��� �������� : ";
				std::cin >> score[i][1];
		}

		for (i = 0; i < 3; i++) {
			std::cout << i + 1 << "��° �л��� �������� : "
				<< score[i][0] << ", �������� :" << score[i][1] << std::endl;
		}

		// 2���� �迭 ����
		int arr2[2][3] = { 1,2,3,4,5,6 };
		int arr3[2][3] = { {1,2,3}, {4,5,6} };

		int arr4[] = { 1,2,3,4 }; // �����Ϸ��� �˾Ƽ� 4�� ũ���ΰ� �ν���
		int arr5[4] = { 1,2,3,4 }; // �ᱹ �̰Ŷ� ��������

		/* 
		*  ,�ٸ�
		*  arr[]; �� �ȉ´�.
		*  �����Ͻ� �޸𸮸� �Ҵ��ؾ� �ϱ� ����.
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

// main �Լ�
int main() {
lesson::pointer::main();
return 0;
}