#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	double x;
	double y;
}POINT;

void largrange_iter(POINT* point, int size, double coef);

//라그랑주 보간법 (재귀)
void largrange_iter(POINT* point, int size, double* coef) {
	double coef_poly_i[size];

	//계산식
	for (int n = 0; n < size; n++) {//n 번째 점을 지나는 식
		
	}

	for (int n = 0; n < size; n++) {
		*(coef + n) = coef_poly_i[n];
	}
}

int main(void) {
	POINT point[4] = { { 0, 4 }, { 1, 4 }, { 2, 1 }, { 3, 2 } };
	double coef[3] = { .0, };

	printf("\n반복을 이용한 라그랑주 보간법\n");
	largrange_iter(point, 4, coef);
	for (int i = 0; i < 3; i++) {
		printf("%.2lf * x^%d +", coef[i], 3 - i);
	}

	return 0;
}

/**
* Q&A
* 
*/