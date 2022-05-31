// Pointers Usage in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void pointerToAnIntegerVariable() {
	int a = 5;
	int *p = &a;
}

void pointerToAnArrayOfInteger1() {
	int a[] = { 35,345,234,324,34523 };
	int *p = a;
	int size = sizeof(a) / sizeof(int);
	cout << "size = " << size << endl;
	for (int i = 0; i < size; i++) {
		cout << *(p+i) << " ";
	}
}

void PointerToAnArrayOfIntegers2() {
	// Declaring a pointer to store address	// pointing to an array of size 3
	// p is a pointer to an array of 3 integers
	int(*p)[3];

	// Define an array of size 3
	int a[3] = { 461, 22, 43 };

	// Store the base address of the
	// array in the pointer variable
	p = &a;
	int* q = p[0];
	// Print the results
	for (int i = 0; i < 3; i++) {
		//cout << *(*(p)+i) << " ";
		//cout << q[i] << " ";
		cout << p[0][i] << " ";
	}
}

void PointerToAnArrayOfIntegers3() {
	// Declaring a pointer to store address	// pointing to an array of size 3
	// p is a pointer to an array of 3 integers
	int(*p)[3];

	int b[2][3] = { {23,4,3}, {434,57,68} };
	p = &b[0];
	int* q = p[0];

	// Print the results
	for (int i = 0; i < 3; i++) {
		//cout << *(*(p)+i) << " ";
		//cout << q[i] << " ";
		cout << p[1][i] << " ";
	}
}
void ArrayofIntegerPointers() {
	// Declare an array of size 3 which
		// will store integer pointers
		int* p[3];

	// Integer variables
	int a = 1, b = 2, c = 3;

	// Store the address of integer
	// variable at each index
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	// Print the result
	for (int i = 0; i < 3; i++) {
		cout << *p[i] << " ";
	}
}

int max(int a, int b) {
	return a > b ? a : b;
}
typedef int(*FMaxType)(int, int);

void FunctionPointer() {
	//int(*fmax)(int, int) = max;
	FMaxType fmax = max;
	int x = fmax(34, 436);
	cout << x << endl;

}

typedef int (Employee::*MFPtr) (int, int);
void MemberFunctionPointer() {
	//MFPtr fptr = &Employee::min;
	int (Employee::*fptr) (int, int) = &Employee::min;
	Employee obj;
	int z = (obj.*fptr)(3, 324);
	cout << z << endl;

	Employee* p = &obj;
	int v = (p->*fptr)(234, 4);
	cout << v << endl;
}

const int row = 3;
const int col = 4;
int d1 = 4;
int d2 = 5;
int d3 = 6;

int* arr2d_single_pointer() {
	int *arr = (int *)malloc(row * col * sizeof(int));

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			//*(arr + i * col + j) = i * col + j;
			arr[i * col + j] = i * col + j;
	return arr;
}

void print_2d_single_pointer(int* p) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			//printf("%d ", *(p + i * col + j));
			printf("%d ", p[i * col + j]);
		printf("\n");
	}
}

Employee* arrObj2D_single_pointer() {
	Employee *arr = (Employee *)malloc(row * col * sizeof(Employee));

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			*(arr + i * col + j) = Employee(i,j);
	return arr;
}

void print_Obj2D_single_pointer(Employee* p) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << *(p + i * col + j);
		printf("\n");
	}
}

int** arr2d_1() {
	int** p = new int*[row];
	for (int i = 0; i < row; i++) {
		p[i] = new int[col];
		for (int j = 0; j < col; j++) {
			p[i][j] = i * col + j;
		}
	}
	return p;
}
int** arr2d_2() {
	int** p = new int*[row];
	for (int i = 0; i < row; i++) {
		*(p + i) = new int[col];
		for (int j = 0; j < col; j++) {
			*(*(p + i) + j) = i * col + j;
		}
	}
	return p;
}

int** arr2d_3() {
	int **arr = (int **)malloc(row * sizeof(int*));

	for (int i = 0; i < row; i++) {
		arr[i] = (int *)malloc(col * sizeof(int));
		for (int j = 0; j < col; j++)
			arr[i][j] = i * col + j;
	}
	return arr;
}


void print_2d(int** p) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%2d\t", p[i][j]);
		}
		printf("\n");
	}
}

int*** arr3d_1() {
	int*** p = new int**[d1];
	for (int i = 0; i < d1; i++) {
		p[i] = new int*[d2];
		for (int j = 0; j < d2; j++) {
			p[i][j] = new int[d3];
			for (int k = 0; k < d3; k++) {
				p[i][j][k] = (i*d2 + j)*d3 + k;
			}
		}
	}
	return p;
}

int*** arr3d_2() {
	int*** p = (int***)malloc(sizeof(int***)*d1);//new int**[d1];
	for (int i = 0; i < d1; i++) {
		*(p + i) = (int**)malloc(sizeof(int**)*d2);//new int*[d2];
		for (int j = 0; j < d2; j++) {
			*(*(p + i) + j) = (int*)malloc(sizeof(int*)*d3);//new int[d3];
			for (int k = 0; k < d3; k++) {
				*(*(*(p + i) + j) + k) = (i*d2 + j)*d3 + k;

			}
		}
	}
	return p;
}

void  print3d(int*** p) {
	for (int i = 0; i < d1; i++) {
		for (int j = 0; j < d2; j++) {
			for (int k = 0; k < d3; k++) {
				printf("%2d\t", p[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main() {
	//int** p = arr2d_3();
	//print_2d(p);
	PointerToAnArrayOfIntegers3();
}
