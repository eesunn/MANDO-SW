

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

