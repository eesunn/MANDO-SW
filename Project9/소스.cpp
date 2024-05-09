
//선택정렬

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
		cout <<" " << arr[i];
	}

	return 0;
}
	

