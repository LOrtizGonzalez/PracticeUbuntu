#include<iostream>
using namespace std;

int main() {
  int digit;
  cout << "Enter the number of iterations you would like" << endl;
  cin >> digit;
  int array[digit];
  for(int i = 0; i < digit; i++) {
  	cout << "Enter an integer: " << endl;
  	cin >> array[i];
  }
  for(int i = 0; i < digit; i++) {
  	//int value = array[i];
  	for(int j = 0; j < i; j++) {
			if(array[j] > array[i]) {
				swap(array[j],array[i]);
			}
  	}
  }
  
  cout << "Your sorted inputs are: ";
  for(int i = 0; i < digit; i++) {
  	cout << array[i] << " ";
  }
  cout << endl;

	return 0;
}
