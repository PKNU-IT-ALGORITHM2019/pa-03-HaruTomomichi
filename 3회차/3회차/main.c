#include "main.h"

void main() {
	clock_t start, end;

	start = clock();

	// ���⿡ ���� ������ ����

	end = clock();

	printf("���� �ð��� %lf���Դϴ�", (double)(end - start) / CLOCKS_PER_SEC);

	getchar();
	getchar();
}