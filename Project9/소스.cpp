// ��������
#include <iostream>
using namespace std;

int main() {
	//�迭 ����
	int arr[5] = { 15,11,1,3,8 };
	int i, j, temp, index, min;

	for (i = 0; i < 5; ++i) {
		//���� ���� ���� ���� ������ ��ġ 
		min = arr[i];
		index = i;
		//���Ͽ� ���� ���� ���� ��ġ��� 
		for (j = i + 1; j < 5; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		//�񱳰� ������ ��ȯ 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	//��� 
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}

// ��������
#include <iostream>
using namespace std;

int main() {
	// �迭 ����
	int arr[5] = { 15, 11, 1, 3, 8 };
	int i, j, key;

	for (i = 1; i < 5; ++i) {
		key = arr[i]; // ���� ���Ե� ����
		j = i - 1;

		// ���� ����(key)�� ���� ����(arr[j])���� ũ�� ����
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j]; // ���Ҹ� �� ĭ�� ���������� �̵�
			j = j - 1;
		}
		arr[j + 1] = key; // ������ ��ġ�� ���� ����
	}

	// ���ĵ� �迭 ���
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}

//���� ����
#include <iostream>
using namespace std;

int main() {
	// �迭 ����
	int arr[5] = { 15, 11, 1, 3, 8 };
	int i, j, temp;

	for (i = 0; i < 4; ++i) { // ��ü �迭�� ���� �ݺ�
		for (j = 0; j < 4 - i; ++j) { // �Ź� �迭�� ������ ���ĵ� �κ��� �����ϰ� ��
			if (arr[j] > arr[j + 1]) {
				// ������ �� ��Ҹ� ���Ͽ� �ʿ��� ��� ��ȯ
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// ���ĵ� �迭 ���
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}