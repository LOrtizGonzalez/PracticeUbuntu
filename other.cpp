#include<iostream>
using namespace std;

void sort(int* A, int length);
void display(int* A, int length);

int main() {
  int digit;
  cout << "Enter the number of iterations you would like" << endl;
  cin >> digit;
  int array[digit];
  for(int i = 0; i < digit; i++) {
  	cout << "Enter an integer: " << endl;
  	cin >> array[i];
  }
  sort(array,digit);
  cout << "Your sorted inputs are: ";
  display(array,digit);

	return 0;
}

void display(int* A, int length) {
	for(int i = 0; i < length; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

void sort(int* A, int length) {
	for(int i = 0; i < length; i++) {
  	for(int j = 0; j < i; j++) {
			if(A[j] > A[i]) {
				swap(A[j],A[i]);
			}
  	}
  }
}
