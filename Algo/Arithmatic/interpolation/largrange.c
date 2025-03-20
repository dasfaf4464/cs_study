#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	double x;
	double y;
}POINT;

void largrange(double* coef, POINT* point, int size);

//라그랑주 보간법
void largrange(double* coef, POINT* point, int size) {
	
}

int main(void) {
	double* POINT = NULL;
	double coef[4] = { 0, };

	largrange(coef, point, 4);
	
	for (int i = 0; i < 4; i++) {
		printf("%lf x^%d ", coef[i], 3-i);
	}

	return 0;
}

/**
* Q&A
* 
*/