#pragma once
#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)

#define MAX 100000

int data[MAX] = { 0 }, N = 0, clone[MAX] = { 0 };

void initialize_start();

void initialize_end();

void swap(int i, int j);

void bubble_sort(); // ���� / �ּҰ� ����

void selection_sort(); // ���� / �ִ밪 ����

void insertion_sort(); // �񱳰��� ���� / ������ ���� / �ִ밪 ����, ���� �ʿ�