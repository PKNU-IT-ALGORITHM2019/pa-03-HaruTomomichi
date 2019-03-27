#include "main.h"
#include "sub.h"

void main() {

	print1();
	print2();
	print3();
	
	getchar();
	getchar();
}

void print1() {

	printf("\tRandom1000\tReverse1000\tRandom10000\tReverse10000\tRandom100000\tReverse100000\n");

	status = 0;
	printf("Bubble\t");
	printf("%8lf\t%8lf\t", random_start(1000), reverse_start(1000));
	printf("%8lf\t%8lf\t", random_start(10000), reverse_start(10000));
	printf("%8lf\t%8lf\n", random_start(100000), reverse_start(100000));

	status = 1;
	printf("Selection\t");
	printf("%8lf\t%8lf\t", random_start(1000), reverse_start(1000));
	printf("%8lf\t%8lf\t", random_start(10000), reverse_start(10000));
	printf("%8lf\t%8lf\n", random_start(100000), reverse_start(100000));

	status = 2;
	printf("Insertion\t");
	printf("%8lf\t%8lf\t", random_start(1000), reverse_start(1000));
	printf("%8lf\t%8lf\t", random_start(10000), reverse_start(10000));
	printf("%8lf\t%8lf\n", random_start(100000), reverse_start(100000));
}

void print2() {

	printf("\tRandom1000\tReverse1000\tRandom10000\tReverse10000\tRandom100000\tReverse100000\n");



}

void print3() {

	printf("\tRandom1000\tReverse1000\tRandom10000\tReverse10000\tRandom100000\tReverse100000\n");



}

double reverse_start(int temp) {
	N = temp;

	for (int i = 0; i < N; i++) {
		data[i] = N - 1 - i;
	}

	clock_t start, end;
	start = clock();

	end = clock();

	return (double)((end - start) / CLOCKS_PER_SEC);
}

double random_start(int temp) {
	N = temp;

	for (int i = 0; i < N; i++) {
		data[i] = rand() % N;
	}

	clock_t start, end;
	start = clock();


	end = clock();

	return (double)((end - start) / CLOCKS_PER_SEC);;
}