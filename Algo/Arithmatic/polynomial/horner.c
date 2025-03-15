#include <stdio.h>
#include <time.h>
#include <Windows.h>

#define iter 2000000000

int main(void) {
	time_t start, end;
	time_t normal, horner;
	long long int result;

	/*
	* �Ϲ����� ���׽��� ���������� ǥ��
	*/
	start = time(NULL);
	for (long long int i = 0; i < iter; i++) {
		result = 3 * i * i * i * i * i + 2 * i * i * i * i - 5 * i * i * i - i * i + 7 * i - 6;
	}
	end = time(NULL);
	normal = end - start;

	/*
	* Horner's method �� ǥ���� ���׽�
	*/
	start = time(NULL);
	for (long long int i = 0; i < iter; i++) {
		result = ((((3 * i + 2) * i - 5) * i - 1) * i + 7)* i - 6;
	}
	end = time(NULL);
	horner = end - start;

	printf("normal %lds, horner %lds\n",normal, horner);

	return 0;
}
/**
* horner�� �� ���� ������?
* �����Ϸ� ����ȭ���� ����, ���� ȯ��(�ܺ� ���μ��� ����) ����, ��� ��������?
*/