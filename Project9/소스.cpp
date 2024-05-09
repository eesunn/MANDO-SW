

#include <iostream>
using namespace std;

int main() {
	// 배열 선언
	int arr[5] = { 15, 11, 1, 3, 8 };
	int i, j, key;

	for (i = 1; i < 5; ++i) {
		key = arr[i]; // 현재 삽입될 숫자
		j = i - 1;

		// 현재 원소(key)가 이전 원소(arr[j])보다 크면 멈춤
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j]; // 원소를 한 칸씩 오른쪽으로 이동
			j = j - 1;
		}
		arr[j + 1] = key; // 적절한 위치에 원소 삽입
	}

	// 정렬된 배열 출력
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}

