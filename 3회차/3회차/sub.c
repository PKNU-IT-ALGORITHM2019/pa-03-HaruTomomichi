#include "main.h"
#include "sub.h"

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

void merge_make(int data[], int p, int q, int r) {
	int temp[MAX] = { 0 }, i = p, j = q + 1, k = 0;

	while (i <= q && j <= r) {
		if (data[i] <= data[j]) {
			temp[k] = data[i];
			i++, k++;
		}
		else {
			temp[k] = data[j];
			j++, k++;
		}
	}

	if (i > q && j <= r) {
		while (j <= r) {
			temp[k] = data[j];
			j++, k++;
		}
	}
	else if (i <= q && j > r) {
		while (i <= q) {
			temp[k] = data[i];
			i++, k++;
		}
	}

	k = 0;

	for (int i = p; i < r + 1; i++) {
		data[i] = temp[k];
		k++;
	}
}

void merge_sort(int data[], int p, int r) {

	if (p < r) {
		int q = ((p + r)) / 2;
		merge_sort(data, p, q);
		merge_sort(data, q + 1, r);
		merge_make(data, p, q, r);
	}
}

void quick_sort(int data[], int p, int r) {

}

void partition_ver1(int data[], int p, int r) {

}

void partition_ver2(int data[], int p, int r) {

}

void partition_ver3(int data[], int p, int r) {

}