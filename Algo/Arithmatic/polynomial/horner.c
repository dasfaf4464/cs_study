#include <stdio.h>
#include <time.h>

double horner_iter(double coef[], int size, double x);

//반복으로 표현한 horner's method 함수
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

	printf("반복수를 입력하세요 x=1 부터 : ");
	scanf("%d", &iter);

	//직접적인 다항식
	start = clock();
	for (int i = 0; i < iter; i++) {
		double x = (double)i;
		result = 3.0 * x * x * x * x * x + 2.0 * x * x * x * x - 5.0 * x * x * x - x * x + 7.0 * x - 6.0;
	}
	end = clock();
	normal = end - start;

	//Horner's method 다항식
	start = clock();
	for (int i = 0; i < iter; i++) {
		double x = (double)i;
		result = ((((3.0 * x + 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;
	}
	end = clock();
	horner_nor = end - start;

	//Horner's method 반복 함수
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
* horner으로 다항식을 작성하면 더 느린 이유는?
* 컴파일러 최적화에서 차이, 실행 환경(외부 프로세스 간섭) 차이, 출력 과정오류?
* 함수로 작성했을 때 함수 호출 오버헤드와 컴파일러 자체 최적화 이용불가, 배열 접근으로 느린 경우 존재
*/