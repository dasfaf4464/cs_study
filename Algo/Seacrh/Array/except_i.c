#include <stdio.h>

int main(void) {
	int arr[15] = { 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int exception_n = 0;
	
	printf("0 to %d : ", size -1);
	scanf("%d", &exception_n);
	
	//if�� �̿��� ����
	for (int i = 0; i < size; i++) {
		if (i != exception_n) {
			printf("arr[%d] = %d  ", i, arr[i]);
		}
	}
	printf("\n\n");

	//modular�� �̿��� Ž��
	for (int i = exception_n + 1; i != exception_n; i = (i+1)%size) {
		printf("arr[%d] = %d  ", i, arr[i]);
	}

	return 0;
}

/**
* Q&A
* ���Ժ��� ���ǽ� �˻簡 �� ������?
* �� �� �̻��� �ε����� �����ϰ���� ���� ������ ���?
*/