#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int arr[15] = { 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int exception_n[3] = { 0, };
	int except_size = sizeof(exception_n) / sizeof(exception_n[0]);
	
	for (int n = 0; n < except_size; n++) {
		printf("0 to %d : ", size - 1);
		scanf("%d", &exception_n[n]);
	}
	
	//if를 이용한 조건
	for (int i = 0; i < size; i++) {
		bool is_except = false;

		for (int n = 0; n < except_size; n++) {
			if (i == exception_n[n]) {
				is_except = true;
				break;
			}
		}

		if (!is_except) {
			printf("arr[%d] = %d  ", i, arr[i]);
		}
	}
	printf("\n\n");

	//modular를 이용한 탐색 (하나의 인덱스를 제외한 배열 순회)
	for (int i = exception_n[0] + 1; i != exception_n[0]; i = (i + 1) % size) {
		printf("arr[%d] = %d  ", i, arr[i]);
	}

	return 0;
}

/**
* Q&A
* 대입보다 조건식 검사가 더 빠른가?
* 두 개 이상의 인덱스를 제외하고싶을 때도 가능한 방법?
* 쓸모없는?
*/