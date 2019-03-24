#pragma once
#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)

#define MAX 100000

int data[MAX] = { 0 }, N = 0, clone[MAX] = { 0 };

void initialize_start();

void initialize_end();

void swap(int i, int j);

void bubble_sort(); // 우향 / 최소값 정렬

void selection_sort(); // 좌향 / 최대값 정렬

void insertion_sort(); // 비교값은 우향 / 범위는 좌향 / 최대값 정렬, 수정 필요