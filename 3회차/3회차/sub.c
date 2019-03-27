#include "sub.h"

int data[MAX] = { 0 }, N = 0;

void swap(int i, int j) {
	int temp = 0;

	temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

void bubble_sort() {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (data[i] > data[j]) {
				swap(i, j);
			}
		}
	}
}

void selection_sort() {
	int max_value = 0;

	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (j == 0) {
				max_value = j;
				continue;
			}
			else if (data[max_value] < data[j]) {
				max_value = j;
			}
		} // 최대값을 찾는 과정
		swap(max_value, i);
	}
}

void insertion_sort() {
	for (int i = 0; i < N; i++) {
		int temp = data[i];

		for (int j = i - 1; j >= 0; j--) {
			if (data[j] > temp) {
				data[j + 1] = data[j];
			}
			else {
				data[j + 1] = temp;
				break;
			}
		}

		if (data[0] > temp) {
			data[0] = temp;
		}
	}
}