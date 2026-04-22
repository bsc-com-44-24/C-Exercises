#include<iostream>

using namespace std;

int main(){
  int rows, columns;
  double ** array2D = nullptr;

  cout << "Enter the number of rows: ";
  cin >> rows;

  while(rows > 3 || rows <= 0){
    cout << "Invalid input. Rows must be between 1 and 3 \n";
    cin >> rows;
  }
  
  cout << "Enter number of columns: ";
  cin >> columns;

  while(columns>3 || columns<=0){
    cout<<"Invalid input. Columns must be between 1 and 3\n" << "Enter numbr of Columns: ";
    cin >> columns;
  }
  array2D = new double*[rows];

  for(int i = 0; i < rows; i++){
    array2D[i] = new double[columns];
  }
  
  cout << "\nEnter values for the array:\n";
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
        cout<< "Enter element["<< i << "]["<< j <<"]";
        cin >> array2D[i][j];
    }
  }
  cout << "\nThe values in the 2D array are:\n";
  for(int i = 0; i < rows; i++){
    for(int j= 0; j < columns; j++){
        cout<< array2D[i][j]<<" ";
    }
    cout << endl;
  }
  for(int i = 0; i < rows; i++){
    delete[]array2D[i];
  }
  delete[]array2D;

  return 0;
}