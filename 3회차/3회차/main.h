#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

#define MAX 1000000

extern int data[MAX], N, status;
// 0 : bubble / 1 : selection / 2 : insertion / 3 : Merge
// 4 : quick / 5 : Heap / 6 : library

void print1();

void print2();

void print3();

void print_all();

double reverse_start(int temp);

double random_start(int temp);