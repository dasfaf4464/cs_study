#include <stdio.h>
#include <time.h>

double horner_iter(double coef[], int size, double x);

//�ݺ����� ǥ���� horner's method �Լ�
double horner_iter(double coef[], int n, double x) {
	double result = coef[0];

	for (int i = 1; i < n; i++) {
		result = (result * x) + coef[i];
	}

	return result;
}

int main(void) {
	int iter = 1;
	clock_t start, end;
	clock_t normal, horner_nor, horner_func;
	double result;
	double coef[6] = { 3.0, 2.0, -5.0, -1.0, 7.0, -6.0 };

	printf("�ݺ����� �Է��ϼ��� x=1 ���� : ");
	scanf("%d", &iter);

	//�������� ���׽�
	start = clock();
	for (int i = 0; i < iter; i++) {
		double x = (double)i;
		result = 3.0 * x * x * x * x * x + 2.0 * x * x * x * x - 5.0 * x * x * x - x * x + 7.0 * x - 6.0;
	}
	end = clock();
	normal = end - start;

	//Horner's method ���׽�
	start = clock();
	for (int i = 0; i < iter; i++) {
		double x = (double)i;
		result = ((((3.0 * x + 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;
	}
	end = clock();
	horner_nor = end - start;

	//Horner's method �ݺ� �Լ�
	start = clock();
	for (int i = 0; i < iter; i++) {
		double x = (double)i;
		result = horner_iter(coef, 6, x);
	}
	end = clock();
	horner_func = end - start;

	printf("normal %.4lfs, Horner_normal %.4lfs, Horner_iteration %.4lfs\n", \
		(double)normal / CLOCKS_PER_SEC, (double)horner_nor / CLOCKS_PER_SEC, (double)horner_func / CLOCKS_PER_SEC);

	return 0;
}

/**
* Q&A
* horner���� ���׽��� �ۼ��ϸ� �� ���� ������?
* �����Ϸ� ����ȭ���� ����, ���� ȯ��(�ܺ� ���μ��� ����) ����, ��� ��������?
* �Լ��� �ۼ����� �� �Լ� ȣ�� �������� �����Ϸ� ��ü ����ȭ �̿�Ұ�, �迭 �������� ���� ��� ����
*/