#pragma once

#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int* mas, const int size, int left, int right) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left;
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
int sum_array(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return sum;
}
int proizvod(int* mas, const int size) {
	int proiz = 1;
	for (int i = 0; i < size; i++) {
		proiz *= mas[i];
	}
	return proiz;
}
double srednee_arifm(int* mas, const int size) {
	return double(sum_array(mas, size)) / size;
}
int colichestvo(int* mas, const int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) {
			k++;
		}
	}
	return k;
}
bool bol(int* mas, const int size, int x) {
	for (int i = 0; i < size; i++) {
		if (mas[i] == x) {
			return true;
		}

	}
	return false;
}