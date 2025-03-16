#include <stdio.h>

/**
* 논리적 문장은 분기문이라고도 하며 논리적 값에 따라 실행되는 문장을 다르게 할 수 있다.
* 분기를 만드는 문장은 if, switch, conditional statement, goto가 존재한다.
* 논리적 값은 1을 참으로 1이 아닌 수를 거짓으로 하며 논리연산, 비교연산을 사용한다.
* 각 분기문은 CPU가 예측하여 미리 캐싱하는 방법등을 사용하므로 가독성이 비슷하다면 최적화된 방법으로 작성하는것이 좋다.
*/

/*
* And로 이루어진 표현은 부정 관계인 OR로 이루어진 표현으로 변경가능하다.
* 특히 분기가 두가지로 나뉘는 경우에 순서를 바꿔서 조건을 부정하여 표현할 수 있다.
*/

/**
* 분기의 특성과 함수의 특성을 이용해 예외처리를 작성할 수 있다.
*/

int main(void) {
	int logical = 0;
	float logi = 0.0f;

	int score = 0;
	int grade = 0;

	//if문장은 "if (조건) {실행되는 문장들}"의 구조로 이루어지며 조건이 참일 때 실행된다.
	//조건은 실행되는 하나의 문장이 들어갈 수 있으며 이를 이용해 다양한 기법을 이용할 수 있다.
	printf("분기문 진입\n");
	if (logi = 1.0f) {
		printf("참입니다\n");

		//분기문 안엔 다른 분기문이 중첩되어 들어갈 수 있다.
		//if 와 else는 쌍을 이루며 if의 조건이 거짓일 때 실행된다.
		//if와 else는 가장 가까운 조건문과 짝을 이룬다.
		if (logical == (int)logi) {
			printf("두 수가 같습니다.\n");
		}
		else {
			printf("두 수가 다릅니다.\n");
		}
	}
	printf("분기문 탈출\n");

	//else if 구조를 통해 조건을 여러개로 나눌 수 있다.
	printf("점수 : ");
	scanf("%d", &score);
	if (score > 90) {
		printf("a\n");
		grade = 4;
	}
	else if (score > 80) {
		printf("b\n");
		grade = 3;
	}
	else if (score > 70) {
		printf("c\n");
		grade = 2;
	}
	else {
		printf("f\n");
		grade = 1;
	}

	//조건식은 하나의 문장으로 "(조건) ? 참일 때 값 : 거짓일 때 값" 의 구조로 이루어져있다.
	//여기에 값을 반환하는 함수나 문장을 작성할 수 있다.
	score > 75 ? printf("75점 초과\n") : (score = 0);
	printf("score = %d\n", score);

	//switch는 "switch (조건) { case (상수): 실행 문장}" 구조로 이루어져 있으며 '(조건)'이 case의 '(상수)'와 일치하는 문장을 찾아서 실행한다.
	//'break' 문장이 없다면 다음 case에서 실행할 문장까지 실행한다.
	//default는 case가 존재하지 않을 때 실행한다.
	switch (grade) {
	case 4: printf("Excellent\n");
	case 3: printf("Great\n");
	case 2: printf("Good\n");
		break;
	case 1: printf("try next time\n");
	default: printf("something error\n");
	}

	return 0;
}

/**
* !주의사항!
* 1. '='와 '=='을 혼동하지 않아야 한다.
* 2. 트릭을 이용하기 보다 가독성이 우선이여야 한다.
*/