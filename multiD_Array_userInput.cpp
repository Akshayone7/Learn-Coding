#include <iostream>
using namespace std;
int main() {
  int rows, cols;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  int arr[rows][cols];

  // Accept the 2D array from the user
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  // Print the accepted 2D array
    cout << "You entered the following 2D array:" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}