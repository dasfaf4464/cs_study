#include <stdio.h>
#include <time.h>
#include <Windows.h>

#define iter 2000000000

int main(void) {
	time_t start, end;
	time_t normal, horner;
	long long int result;

	/*
	* 일반적인 다항식을 직접적으로 표현
	*/
	start = time(NULL);
	for (long long int i = 0; i < iter; i++) {
		result = 3 * i * i * i * i * i + 2 * i * i * i * i - 5 * i * i * i - i * i + 7 * i - 6;
	}
	end = time(NULL);
	normal = end - start;

	/*
	* Horner's method 로 표현한 다항식
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
* horner이 더 느린 이유는?
* 컴파일러 최적화에서 차이, 실행 환경(외부 프로세스 간섭) 차이, 출력 과정오류?
*/