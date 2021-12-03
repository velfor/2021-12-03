#include "my_func.h"


int main() {
	int etaperemennayaravnadesati = 10;
	const int n = 10;
	int arr[n];
	fill_array(arr, n, 0, 10);
	print_array(arr, n);
	cout<<sum_array(arr, n) << "\n";
	cout << proizvod(arr, n) << "\n";
	cout << srednee_arifm(arr, n) << "\n";
	cout << colichestvo(arr,n) << endl;
	cout << boolalpha << bol(arr, n, etaperemennayaravnadesati);
}