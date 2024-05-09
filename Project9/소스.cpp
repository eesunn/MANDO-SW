// 선택정렬
#include <iostream>
using namespace std;

int main() {
	//배열 선언
	int arr[5] = { 15,11,1,3,8 };
	int i, j, temp, index, min;

	for (i = 0; i < 5; ++i) {
		//가장 작은 수와 가장 작은수 위치 
		min = arr[i];
		index = i;
		//비교하여 가장 작은 수와 위치기록 
		for (j = i + 1; j < 5; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		//비교가 끝나면 교환 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	//출력 
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}

// 삽입정렬
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

//버블 정렬
#include <iostream>
using namespace std;

int main() {
	// 배열 선언
	int arr[5] = { 15, 11, 1, 3, 8 };
	int i, j, temp;

	for (i = 0; i < 4; ++i) { // 전체 배열에 대해 반복
		for (j = 0; j < 4 - i; ++j) { // 매번 배열의 끝부터 정렬된 부분을 제외하고 비교
			if (arr[j] > arr[j + 1]) {
				// 인접한 두 요소를 비교하여 필요한 경우 교환
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// 정렬된 배열 출력
	for (i = 0; i < 5; ++i) {
		cout << " " << arr[i];
	}

	return 0;
}