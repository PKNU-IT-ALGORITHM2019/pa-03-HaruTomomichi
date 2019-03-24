#include "main.h"

void main() {
	clock_t start, end;

	start = clock();

	// 여기에 실행 과정을 넣자

	end = clock();

	printf("실행 시간은 %lf초입니다", (double)(end - start) / CLOCKS_PER_SEC);

	getchar();
	getchar();
}