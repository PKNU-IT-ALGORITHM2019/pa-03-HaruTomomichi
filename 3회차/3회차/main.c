#include "main.h"
#include "sub.h"

int data[MAX] = { 0 }, N = 0, status = 0;

void main() {

	print1();
	print2();
	print3();
	
	getchar();
	getchar();
}

void print1() {

	printf("\t\tRand1000\tReve1000\tRand10000\tReve10000\tRand100000\tReve100000\n");

	status = 0;
	printf("Bubble   \t");
	print_all();

	status = 1;
	printf("Selection\t");
	print_all();

	status = 2;
	printf("Insertion\t");
	print_all();
}

void print2() {

	



}

void print3() {

	



}

void print_all() {
	printf("%8lf\t", random_start(1000));
	printf("%8lf\t", reverse_start(1000));
	printf("%8lf\t", random_start(10000));
	printf("%8lf\n", reverse_start(10000));
	printf("%8lf\t", random_start(100000));
	printf("%8lf\n", reverse_start(100000));
}

double reverse_start(int temp) {
	N = temp;

	for (int i = 0; i < N; i++) {
		data[i] = N - 1 - i;
	}

	clock_t start, end;
	start = clock();

	switch (status) {
	case 0: {
		bubble_sort();
		break;
	}
	case 1: {
		selection_sort();
		break;
	}
	case 2: {
		insertion_sort();
		break;
	}
	case 3: {
		//merge_sort();
		break;
	}
	case 4: {
		//quick_sort();
		break;
	}
	}

	end = clock();

	return ((double)(end - start) / CLOCKS_PER_SEC);
}

double random_start(int temp) {
	N = temp;

	for (int i = 0; i < N; i++) {
		data[i] = rand() % N;
	}

	clock_t start, end;
	start = clock();

	switch (status) {
	case 0: {
		bubble_sort();
		break;
	}
	case 1: {
		selection_sort();
		break;
	}
	case 2: {
		insertion_sort();
		break;
	}
	case 3: {
		//merge_sort();
		break;
	}
	case 4: {
		//quick_sort();
		break;
	}
	}

	end = clock();

	return ((double) (end - start) / CLOCKS_PER_SEC);;
}