
//��������

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
		cout <<" " << arr[i];
	}

	return 0;
}
	

