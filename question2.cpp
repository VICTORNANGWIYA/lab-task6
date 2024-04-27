#include <iostream>

using namespace std;

int main() {
  int rows, cols;

  do {
    cout << "Enter the number of rows less than 3: ";
    cin >> rows;
  } while (rows < 1 || rows > 3);

  do {
    cout << "Enter the number of columns less than 3: ";
    cin >> cols;
  } while (cols < 1 || cols > 3);

  double** arr = new double* [rows];
  for (int i = 0; i < rows; ++i) {
    arr[i] = new double[cols];
  }

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
      cin >> arr[i][j];
    }
    }

  cout << "\nThe array:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
